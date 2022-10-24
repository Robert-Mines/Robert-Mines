// JavaScript Document

function setBrowserInformation() {
      
	  var browserName = document.getElementById("browserName");
	  browserName.textContent = navigator.appCodeName;
	  browserName.className = "highlight";
	  
	  var appName = document.getElementById("appName");
	  appName.innerHTML = "<span class=\"highlight\">" + navigator.appName + "</span>";
	  
	  var version = document.getElementById("version");
	  version.innerHTML = "<p style=\"font-weight: bold; color:#000080; font-size:.75em;\">" + navigator.appVersion + "</p>";
 }