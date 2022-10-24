// JavaScript Document

function storeOrder() {
    try {
        if (window.sessionStorage) {
			
			sessionStorage.fname = document.getElementById("fname").value;
			sessionStorage.lname =  document.getElementById("lname").value;
			sessionStorage.email = document.getElementById("email").value;
			sessionStorage.phone = document.getElementById("phone").value;
			
			// to get the value of the radio list, you iterate through the list to determine which value as selected
			
			var contactPref = document.getElementsByName("contactPref");  // get the radio list object
			
			var value;  // will hold the selected value
			for (var i = 0; i < contactPref.length; i++) {  // iterate through the list to determine what was selected
				if (contactPref[i].checked) {
					value = contactPref[i].value;
					break;  // found it so no need to process any more
				}
			}
			sessionStorage.contactPref = value;

			// same with check boxes, you need to iterate through the checkboxes to determine which values have been selected
			var update = document.getElementsByName("update");
			var values = "";
			for (var i = 0; i < update.length; i++) {
				if (update[i].checked) {
					values += update[i].value + " ";
				}
			}
			sessionStorage.update = values;
			sessionStorage.creditCard = document.getElementById("creditCard").value;
			sessionStorage.creditCardNumber = document.getElementById("cardNumber").value;
			sessionStorage.expireDate = document.getElementById("expireDate").value;

            return true;
        }
        return false;
    }
    catch (err) {
        alert(err);
        return false;
    }
}
function retrieveOrder() {
    document.getElementById("fname").innerText = sessionStorage.fname;
	document.getElementById("lname").innerText = sessionStorage.lname;
    document.getElementById("email").innerText = sessionStorage.email;
	document.getElementById("phone").innerText = sessionStorage.phone;
	document.getElementById("contactPref").innerText = sessionStorage.contactPref;
	document.getElementById("update").innerText = sessionStorage.update;
    document.getElementById("creditCard").innerText = sessionStorage.creditCard;
    document.getElementById("cardNumber").innerText = sessionStorage.creditCardNumber;
	document.getElementById("expireDate").innerText = sessionStorage.expireDate;
}



