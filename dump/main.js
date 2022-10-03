// this activity is same with the string 
// manipulation c++ code

(function main(){
	
	const concatSameLen = (input1, input2) => {
		console.log("str1 = " + input1);
		console.log("str2 = " + input2);
		
		const i = input1.length;
		const j = input2.length;
		
		return ( (i>j) && input1.substr(i-j, j) + input2) 
 	||
	( (i<j) && input1 + input2.substr(j-i, i) )
  ||
 	(input1 + input2);
	};
	
	console.log (
	concatSameLen("21356","1365") );
	console.log (
	concatSameLen("askal","dog4") );
	console.log (
	concatSameLen("choop","poohc") );
})();
