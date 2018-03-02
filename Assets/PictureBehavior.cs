using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PictureBehavior : MonoBehaviour {

	public Renderer quadRenderer;
	public string url;

	void Start(){
		transform.LookAt (Camera.main.transform);
		Vector3 desiredAngle = new Vector3 (0, transform.localEulerAngles.y, 0);
		transform.rotation = Quaternion.Euler (desiredAngle);
	}

	public void LoadImage(string url){
		StartCoroutine (LoadImageFromURL (url));
	}

	IEnumerator LoadImageFromURL(string url){
		this.url = url;
		WWW www = new WWW(url);
		yield return www;
		quadRenderer.material.mainTexture = www.texture;
	}
}
