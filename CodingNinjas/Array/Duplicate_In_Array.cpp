int findDuplicate(vector<int> &arr) 
{
    //for nested loop for checking each element with every element in array for duplicate  
    for(int i = 0; i < arr.size(); i++){
      // start count with 0 and and increment if duplicate found
       int count = 0; 
       for(int j = 0; j < arr.size(); j++){
           if(arr[i]==arr[j]){
               count++;
           }
       }
      // if count for a element is found greater than one then it is duplicate so.. return that element
       if(count > 1){
           return arr[i];
       }
   }
	
}
