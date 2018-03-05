using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GoogleService : MonoBehaviour {

	public PictureFactory pictureFactory;
	public Text queryText;

	private const string API_KEY = "-------------------";
	private const string SEARCH_ENGINE_ID = "-------------------";
	private List<string> urlList = new List<string> ();

	public void GetPictures(){
		StartCoroutine (PictureRoutine (queryText.text));
	}

	public void GetPictures(string searchQuery){
		StartCoroutine (PictureRoutine (searchQuery));
	}

	IEnumerator PictureRoutine(string query){
		//delete old images
		pictureFactory.DeleteOldPictures();
		//deactivate text object until objects are done getting placed 
		queryText.transform.parent.gameObject.SetActive (false);
		//save camera forward vector so we can move around while objects are getting placed
		Vector3 cameraForward = Camera.main.transform.forward;
		//we can only get 10 results at a time so we have to loop through and save our progress changing the start number after every 10
		int results = 1;
		for (int i = 1; i <= 60; i += 10) {
			string url = "https://www.googleapis.com/customsearch/v1?q=" + WWW.EscapeURL(query) +
				"&cx=" + SEARCH_ENGINE_ID + "&imgSize=large&searchType=image&start=" + i + "&&fields=items%2Flink&filter=0&key=" + API_KEY;
			WWW www = new WWW (url);
			yield return www;
			ParseResponse(www.text);
			print (www.text);
			pictureFactory.CreateImages (urlList, results,cameraForward);
			results++;
		}
		yield return new WaitForSeconds (5f);
		queryText.transform.parent.gameObject.SetActive (true);
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
