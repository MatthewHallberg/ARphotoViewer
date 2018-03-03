using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PictureBehavior : MonoBehaviour {

	public Rigidbody rb;
	public Renderer quadRenderer;
	public string url;
	private Vector3 desiredPosition;
	private bool shouldLerp = false;

	void Start(){
		//look at camera
		transform.LookAt (Camera.main.transform);
		Vector3 desiredAngle = new Vector3 (0, transform.localEulerAngles.y, 0);
		transform.rotation = Quaternion.Euler (desiredAngle);
		//force into air 
		desiredPosition = transform.localPosition;
		transform.localPosition += new Vector3 (0, 20, 0);
		shouldLerp = true;
	}

	void Update(){
		//interpolate into place
		if (shouldLerp) {
			transform.localPosition = Vector3.Lerp (transform.localPosition, desiredPosition, Time.deltaTime * 4f);
		}
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

	void OnCollisionEnter(Collision col){
		if (col.gameObject.name.Contains ("ARCamera")) {
			rb.constraints = RigidbodyConstraints.FreezePositionY | 
				RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationY | RigidbodyConstraints.FreezeRotationZ;
			shouldLerp = false;
		}
	}
	void OnCollisionExit(Collision col){
		if (col.gameObject.name.Contains ("ARCamera")) {
			shouldLerp = true;
			rb.constraints = RigidbodyConstraints.FreezePositionX | RigidbodyConstraints.FreezePositionY | RigidbodyConstraints.FreezePositionZ |
				RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationY | RigidbodyConstraints.FreezeRotationZ;
		}
	}
}
