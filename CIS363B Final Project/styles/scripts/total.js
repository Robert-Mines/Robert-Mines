// JavaScript Document


function calculateTotal()
{
	try
	{
		var quantity = document.getElementById("quantity");
		var cost = document.getElementById("cost");
		var total =document.getElementById("total");
			
		var valQuanity = parseInt(quantity.value);
		var valCost = parseFloat(cost.value);
		
		if (valQuanity > 0 && valQuanity <= 1000)
		{
			if (valCost > 0 && valCost <= 10000)
			{
				total.textContent = "$" + (valQuanity * valCost).toFixed(2);
			}
			else
			{
				alert("Cost must be greater than 0 and less $10,000");
				cost.textContent = "";
				total.textContent = "";
			}
		}
		else
		{
			alert("Quanity must be between 1 and 1000");
			quantity.textContent = "";
			total.textContent = "";
		}
	}
	catch (e)
	{
		alert(e)
	}
} 

function clearFields() {
	
	
	try {
		var numItems = document.getElementById("quantity");
		numItems.value = "";
		
		var cost = document.getElementById("cost");
		cost.value = "";
		
		var total = document.getElementById("total");
		total.textContent = "";
	}
	catch (err) {
		window.alert(err);
	}
}
	
	