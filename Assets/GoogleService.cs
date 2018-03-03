using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoogleService : MonoBehaviour {

	public PictureFactory pictureFactory;

	private const string API_KEY = "AIzaSyCmcdnJnKLGSxk1Jm_OD60m4PoIiD-DeYs";
	private const string SEARCH_ENGINE_ID = "011535004225295624669%3Aiesk5a3a_1c";
	private List<string> urlList = new List<string> ();


	public void GetPictures(string searchQuery){
		StartCoroutine (PictureRoutine (searchQuery));
	}

	IEnumerator PictureRoutine(string query){
		//delete old images
		pictureFactory.DeleteOldPictures();
		int results = 3;
		for (int i = 1; i <= 60; i += 10) {
			string url = "https://www.googleapis.com/customsearch/v1?q=dog+memes&" +
				"cx=" + SEARCH_ENGINE_ID + "&imgSize=large&searchType=image&start=" + i + "&&fields=items%2Flink&filter=0&key=" + API_KEY;
			WWW www = new WWW (url);
			yield return www;
			ParseResponse(www.text);
			pictureFactory.CreateImages (urlList, results);
			results++;
		}
	}

	void ParseResponse(string text){
		urlList.Clear ();
		string[] urls = text.Split ('\n');
		foreach (string line in urls) {
			if (line.Contains("link")){
				string url = line.Substring (12,line.Length-13);
				//filtering by png or jpg doesnt seem to work from Google so we do it here:
				if (url.Contains (".jpg") || url.Contains (".png")) {
					urlList.Add (url);
				}
			}
		}
	}
}
