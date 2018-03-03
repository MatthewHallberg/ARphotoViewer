using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PictureFactory : MonoBehaviour {

	public GameObject picPrefab;
	public GoogleService googleService;

	// Use this for initialization
	void OnEnable () {
		//develop
		#if UNITY_EDITOR
		googleService.GetPictures ("dog memes");
		#endif
	}

	public void DeleteOldPictures(){
		if (transform.childCount > 0) {
			foreach (Transform child in this.transform) {
				Destroy (child.gameObject);
			}
		}
	}
	
	public void CreateImages(List<string>urlList, float radius){
		int picNum = 0;
		Vector3 center = Camera.main.transform.position;
		foreach (string url in urlList) {
			picNum++;
			float angle = (picNum * 40);
			Vector3 pos = RandomCircle(center,radius,angle);
			GameObject pic = Instantiate (picPrefab,pos,Quaternion.identity, this.transform);
			pic.GetComponent<PictureBehavior> ().LoadImage (url);
		}
	}
	Vector3 RandomCircle(Vector3 center, float radius,float angle){
		Vector3 pos;
		pos.x = center.x + radius * Mathf.Sin(angle * Mathf.Deg2Rad);
		pos.y = center.y; 
		pos.z = center.z + radius * Mathf.Cos(angle * Mathf.Deg2Rad);
		return pos;
	}
}
