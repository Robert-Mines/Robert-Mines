// JavaScript Document

function validateEmail(emailAddress) {
		var pattern=/^([a-zA-Z0-9_.-])+@([a-zA-Z0-9_.-])+\.([a-zA-Z])+([a-zA-Z])+/;
		var regEmail = new RegExp(pattern);
		var result = regEmail.test(emailAddress);
		
		return result;
}
function isEmpty(str) {
		return (!str || str.trim().length == 0);
}

