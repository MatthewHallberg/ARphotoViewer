using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PictureFactory : MonoBehaviour {

	public GameObject picPrefab;
	public GoogleService googleService;

	// Use this for initialization
	void Start () {
		googleService.GetPictures ("dog memes");
	}
	
	public void CreateImages(List<string>urlList, float radius){
		int picNum = 0;
		Vector3 center = Camera.main.transform.position;
		foreach (string url in urlList) {
			picNum++;
			int angle = picNum * 30;
			Vector3 pos = RandomCircle(center,radius,angle);
			GameObject pic = Instantiate (picPrefab,pos,Quaternion.identity, this.transform);
			pic.GetComponent<PictureBehavior> ().LoadImage (url);
		}
	}
	Vector3 RandomCircle(Vector3 center, float radius,int a){
		float ang = a;
		Vector3 pos;
		pos.x = center.x + radius * Mathf.Sin(ang * Mathf.Deg2Rad);
		pos.y = center.y; 
		pos.z = center.z + radius * Mathf.Cos(ang * Mathf.Deg2Rad);
		return pos;
	}
}
