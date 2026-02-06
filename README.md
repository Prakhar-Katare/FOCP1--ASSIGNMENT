This file is a merged representation of the entire codebase, combined into a single document by Repomix.
The content has been processed where line numbers have been added, security check has been disabled.

<file_summary>
This section contains a summary of this file.

<purpose>
This file contains a packed representation of the entire repository's contents.
It is designed to be easily consumable by AI systems for analysis, code review,
or other automated processes.
</purpose>

<file_format>
The content is organized as follows:
1. This summary section
2. Repository information
3. Directory structure
4. Repository files (if enabled)
5. Multiple file entries, each consisting of:
  - File path as an attribute
  - Full contents of the file
</file_format>

<usage_guidelines>
- This file should be treated as read-only. Any changes should be made to the
  original repository files, not this packed version.
- When processing this file, use the file path to distinguish
  between different files in the repository.
- Be aware that this file may contain sensitive information. Handle it with
  the same level of security as you would the original repository.
</usage_guidelines>

<notes>
- Some files may have been excluded based on .gitignore rules and Repomix's configuration
- Binary files are not included in this packed representation. Please refer to the Repository Structure section for a complete list of file paths, including binary files
- Files matching patterns in .gitignore are excluded
- Files matching default ignore patterns are excluded
- Line numbers have been added to the beginning of each line
- Security check has been disabled - content may contain sensitive information
- Files are sorted by Git change count (files with more changes are at the bottom)
</notes>

</file_summary>

<directory_structure>
Q1.c
Q10.c
Q11.c
Q12.c
Q13.c
Q14.c
Q15.c
Q16.c
Q17.c
Q18.c
Q2.c
Q3.c
Q4.c
Q5.c
Q6.c
Q7.c
Q8.c
Q9.c
ques21.png
ques22.png
ques23.png
ques24.png
README.md
</directory_structure>

<files>
This section contains the contents of the repository's files.

<file path="Q1.c">
 1: #include <stdio.h>
 2: #include <math.h>
 3: int main(){
 4:     int a, original,num,ans=0, rem;//n=a, original, num, result=ans=0, rem
 5: 
 6:     printf("Enter a number : ");
 7:     scanf("%d",&num);
 8: 
 9:     original=num;
10:     while(original!=0){
11:         original=original/10;
12:         a++;
13: 
14:     }
15:     while(original!=0){
16: 
17:         rem=original%10;
18:         ans=ans + pow(rem,a);
19:         original=original/10;
20:     }
21:     if(original==ans){
22:         printf("THE GIVEN NUMBER IS AN ARMSTRONG NUMBER ");
23:     }else{
24:         printf("Not an Armstrong number");
25:     }
26:     return 0;
27: }
</file>

<file path="Q10.c">
 1: #include<stdio.h>
 2: int main(){
 3: 
 4: 
 5:     int stdnum,count=0;
 6:     
 7: 
 8:     printf("Enter number of students: ");
 9:     scanf("%d",&stdnum);
10: 
11:     int arr[stdnum];
12: 
13: 
14:     for(int i=0; i<stdnum; i++){
15:         printf("Enter marks of student %d: ",i+1);
16:         scanf("%d",&arr[i]);
17: 
18:     }
19:     for(int i=0; i<stdnum; i++){
20:         if(arr[i]==99){
21:             count++;}
22:     }
23:     printf("\nNumber of students who scored 99 marks: %d students\n",count);
24: 
25:     for(int i=0; i<stdnum; i++){
26:         if(arr[i]==99){
27:             printf("\nStudent %d scored 99 marks!\n",i+1);
28:         }
29:     }
30:     
31:     return 0;
32: }
</file>

<file path="Q11.c">
 1: #include<stdio.h>
 2: int main(){
 3: 
 4: 
 5:     int n,count=0,count1=0;
 6:     printf("Enter number of elements in array: ");
 7:     scanf("%d",&n);
 8: 
 9:     int scores[n];
10:     printf("Enter %d numbers to be stored in the array: \n",n);
11:     for(int i=0; i<n; i++){
12:         scanf("%d",&scores[i]);
13:     }
14:     
15:     int even_arr[n],odd_arr[n];
16: 
17: 
18:     for(int i=0; i<n; i++){
19:         if(scores[i]%2==0 ){
20:             even_arr[count++]=scores[i];
21:         }
22:         else{ odd_arr[count1++]=scores[i];
23:         }
24:     }
25: 
26: 
27:     printf("\nScores: ");
28:     for(int i=0; i<n; i++){
29:         printf("%d ",scores[i]);
30:     }printf("!");
31: 
32: 
33:     printf("\n\nEven Scores: ");
34:     for(int j=0; j<count; j++){
35:         printf("%d ",even_arr[j]);
36:     }printf("!");
37:         
38: 
39:     printf("\nOdd Scores: ");
40:     for(int j=0; j<count1; j++){
41:         printf("%d ",odd_arr[j]);
42:     }printf("!");
43:     return 0;
44: }
</file>

<file path="Q12.c">
 1: #include<stdio.h>
 2: int main(){
 3: 
 4: 
 5:     int n;
 6:     printf("Enter number of values in array: ");
 7:     scanf("%d",&n);
 8: 
 9:     int arr[n];
10:     printf("Enter %d values: \n",n);
11:     for(int i=0; i<n; i++){
12:         scanf("%d",&arr[i]);
13:     }
14: 
15:     int min,max;
16:     min=arr[0];
17:     max=arr[0];
18: 
19:     for(int i=0; i<n; i++){
20:         if(arr[i]>max){
21:             max=arr[i];
22:         }
23:         if(arr[i]<min){
24:             min=arr[i];
25:         }
26:     }
27: 
28:     printf("Maximum value: %d\n",max);
29:     printf("Minimum value: %d",min);
30: 
31:     return 0;
32: }
</file>

<file path="Q13.c">
 1: #include<stdio.h>
 2: int main(){
 3: 
 4: 
 5:     int n; 
 6:     printf("Enter number of values in array: ");
 7:     scanf("%d",&n);
 8: 
 9:     int arr[n];
10: 
11:     printf("Enter %d values: \n",n);
12:     for(int i=0; i<n; i++){
13:         scanf("%d",&arr[i]);
14:     }
15: 
16:     if(n<=2){
17:         printf("Peak Value can not be possible!");
18:     }else{
19:         printf("Peak Value(s) in the array: \n");
20:         for(int i=1; i<n-1; i++){
21:             if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
22:                 printf("%d ",arr[i]);
23:             }
24:         }
25:     }
26:     return 0;
27: }
</file>

<file path="Q14.c">
 1: #include<stdio.h>
 2: int main(){
 3: 
 4: 
 5:     int n,count=0,isprime=1,num;
 6:     
 7:     printf("Enter number of values to be stored in array: ");
 8:     scanf("%d",&n);
 9: 
10:     int arr[n];
11:     printf("Enter %d values: \n",n);
12:     for(int i=0; i<n; i++){
13:         scanf("%d",&arr[i]);
14:     }
15:     
16:     for(int i=0; i<n; i++){
17:         num=arr[i];
18:         if(arr[i]<=1){isprime=0;}
19:         else{
20:             for(int j=2; j*j<=num; j++){
21:                 if(num%j==0){
22:                     isprime=0;
23:                     break;
24:                 }
25:             }
26:         }
27:         if(isprime){count++;}
28:     }
29:     printf("\nPrime Numbers in the array: %d",count);
30:     return 0;
31: }
</file>

<file path="Q15.c">
 1: #include<stdio.h> 
 2: int main(){
 3: 
 4: 
 5:     int n; 
 6:     printf("Enter number of values in array: ");
 7:     scanf("%d",&n);
 8: 
 9:     int arr[n],arr1[n];
10:     printf("Enter %d values: \n",n);
11:     for(int i=0; i<n; i++){
12:         scanf("%d",&arr[i]);
13:     }
14: 
15: 
16:     printf("\nArray before rotating: ");
17:     for(int i=0; i<n; i++){
18:         printf("%d ",arr[i]);
19:     }
20: 
21:     for(int i=1; i<n; i++){
22:         arr1[i]=arr[i-1];
23:     }
24:     arr1[0]=arr[n-1];
25: 
26: 
27:     printf("\nArray after rotating: ");
28:     for(int i=0; i<n; i++){
29:         printf("%d ",arr1[i]);
30:     }
31: }
</file>

<file path="Q16.c">
 1: #include<stdio.h>
 2: int main(){
 3:     
 4: 
 5:     
 6:    int n, index, value;
 7: 
 8:     printf("Enter number of elements in array: ");
 9:     scanf("%d", &n);
10: 
11:     int arr[100]; 
12: 
13:     printf("Enter %d elements:\n", n);
14:     for(int i = 0; i < n; i++) {
15:         scanf("%d", &arr[i]);
16:     }
17: 
18:     printf("Enter value to insert: ");
19:     scanf("%d", &value);
20: 
21: 
22:     printf("Enter position to insert (0 = front, %d = end, or any index): ", n);
23:     scanf("%d", &index);
24: 
25: 
26:     printf("\nArray before insertion:\n");
27:     for(int i = 0; i < n; i++) {
28:         printf("%d ", arr[i]);
29:     }
30:     printf("\n");
31: 
32: 
33:     for(int i = n; i > index; i--) {
34:         arr[i] = arr[i - 1];
35:     }
36: 
37:     arr[index] = value;
38:     n++;
39: 
40:     printf("\nArray after insertion:\n");
41:     for(int i = 0; i < n; i++) {
42:         printf("%d ", arr[i]);
43:     }
44:     printf("\n");
45:     return 0;
46: }
</file>

<file path="Q17.c">
 1: #include<stdio.h>
 2: int main(){
 3:     
 4: 
 5:     
 6:    int n, index;
 7: 
 8:     printf("Enter number of elements in array: ");
 9:     scanf("%d", &n);
10: 
11:     int arr[100]; 
12: 
13:     printf("Enter %d elements:\n", n);
14:     for(int i=0; i<n; i++) {
15:         scanf("%d", &arr[i]);
16:     }
17: 
18: 
19:     printf("Enter position of number to delete: ", n);
20:     scanf("%d", &index);
21: 
22: 
23:     printf("\nArray before Deletion:\n");
24:     for(int i=0; i<n; i++) {
25:         printf("%d ", arr[i]);
26:     }
27:     printf("\n");
28: 
29: 
30:     for(int i=index; i<n; i++) {
31:         arr[i]=arr[i+1];
32:     }n--;
33:     
34:     printf("\nArray after deletion:\n");
35:     for(int i=0; i<n; i++) {
36:         printf("%d ", arr[i]);
37:     }
38:     printf("\n");
39:     return 0;
40: }
</file>

<file path="Q18.c">
 1: #include<stdio.h>
 2: int main(){
 3: 
 4: 
 5:     int n,duplicate=1,a; 
 6:     printf("Enter number of values in the array: ");
 7:     scanf("%d",&n);
 8: 
 9:     int arr[n];
10:     printf("Enter %d values: \n",n);
11:     for(int i=0; i<n; i++){
12:         scanf("%d",&arr[i]);
13:     }
14: 
15:     printf("Duplicates in the Array: ");
16:     for(int i=0; i<n; i++){
17: 
18: 
19:         int alrdyPrt = 0;
20:         for(int k = 0; k < i; k++){
21:             if(arr[k] == arr[i]) {
22:                 alrdyPrt = 1;
23:                 break;
24:             }
25:         }
26: 
27:         if(alrdyPrt==1) continue;
28:         for(int j=i+1; j<n; j++){
29:             if(arr[i]==arr[j]){
30:                 printf("%d ",arr[i]);
31:                 duplicate=0;
32:                 break;
33:             }
34:         }
35:     }
36:     
37: 
38:     if(duplicate==1)printf("-1");
39:     return 0;
40: }
</file>

<file path="Q2.c">
 1: #include <stdio.h>
 2: int main(){
 3: 
 4: // HCF OF TWO NUMBERS!
 5:     int num1,num2; 
 6:     int small,hcf=0;
 7:     printf("Enter first numbers: ");
 8:     scanf("%d",&num1);
 9:     printf("Enter second numbers: ");
10:     scanf("%d",&num2);
11: 
12:     if(num1>num2){
13:         small=num2;
14:     }
15:     else{small=num1;}
16: 
17:     for(int i=1; i<=small; i++){
18:         if(num1%i==0 && num2%i==0){
19:             if(i>hcf){
20:                 hcf=i;
21:             }
22:         }
23:         
24:     }
25:     printf("HCF: %d",hcf);
26:     return 0;
27: }
</file>

<file path="Q3.c">
 1: #include <stdio.h>
 2: int main(){
 3:     int a,b; 
 4:     printf("Enter two numbers: \n");
 5:     scanf("%d ",&a);
 6:     scanf("%d", &b);
 7: 
 8:     int c=a+(~b+1);
 9:     printf("Subtraction of Numbers: %d",c);
10:     
11:     return 0;
12: }
</file>

<file path="Q4.c">
 1: #include<stdio.h>
 2: int main(){
 3:     
 4: 
 5:     int a,b,temp; 
 6:     printf("Enter frist numbers: \n");
 7:     scanf("%d",&a);
 8:     printf("Enter second numbers: \n");
 9:     scanf("%d",&b);
10: 
11:     printf("Original numbers:\nA=%d\tB=%d\n",a,b);
12:     printf("After Swapping\n");
13: 
14: 
15:     temp=a; 
16:     a=b; 
17:     b=temp;
18:     printf("\nUsing Temp Variable: A=%d  B=%d!",a,b);
19:     
20: 
21:     int* aPtr=&b;
22:     int* bPtr=&a;
23:     printf("\nUsing Pointer Manipulation: A=%d  B=%d!",*bPtr,*aPtr);
24:     
25: 
26:     a=a+b;
27:     b=a-b;
28:     a=a-b;
29:     printf("\nUsing Arithmetic Operator: A=%d  B=%d!",b,a);
30: 
31: // Using Bitwise XOR after this
32:     a=a^b;
33:     b=a^b;
34:     a=a^b;
35:     printf("\n Using Bitwise Xor: A=%d  B=%d!",a,b);
36: 
37:     return 0;
38: }
</file>

<file path="Q5.c">
 1: #include<stdio.h>
 2: int main(){
 3: 
 4: 
 5:     int x,y;
 6:     printf("Enter value of x: ");
 7:     scanf("%d",&x);
 8: 
 9:     printf("Enter value of y: ");
10:     scanf("%d",&y);
11: 
12:     if(x==0 && y==0){
13:         printf("Point is at origin!");
14:     }
15: 
16:     if(x==0 && (y<0 || y>0)){
17:         printf("Point (%d,%d) is on y-axis!",x,y);
18:     }
19:     if((x<0 || x>0) && y==0){
20:         printf("Point (%d,%d) is on x-axis!",x,y);
21:     }
22: 
23:     if(x!=0 && y!=0){
24:         printf("Point (%d,%d) lies in ",x,y);
25:         if(x>0 && y>0)printf("quadrant 1!");
26:         if(x<0 && y>0)printf("quadrant 2!");
27:         if(x<0 && y<0)printf("quadrant 3!");
28:         if(x>0 && y<0)printf("quadrant 4!");
29:     }
30:     return 0;
31: }
</file>

<file path="Q6.c">
 1: #include<stdio.h>
 2: int main(){
 3: 
 4: 
 5:     int deci=0, bs=1, lstdigit,choice,deci1, bs1=1, lstdigit1;
 6:     long binary,binary1=0;
 7:    
 8:     printf("1.Binary to Decimal!\n2.Decimal to Binary!\n");
 9:     printf("---Enter your choice---\n");
10:     scanf("%d",&choice);
11: 
12: 
13:     if(choice==1){
14:        printf("\nEnter a binary number: ");
15:         scanf("%d",&binary);
16:         while(binary>0){
17:             lstdigit = binary % 10;
18:             deci += lstdigit * bs;
19:             bs *= 2;
20:             binary /= 10;
21:         }
22:         printf("Decimal Number: %d",deci);
23:     }
24: 
25: 
26:     if(choice==2){
27:         printf("\nEnter a decimal number: ");
28:         scanf("%d",&deci1);
29:         while(deci1>0){
30:             lstdigit1 = deci1 % 2;
31:             binary1 = binary1 + lstdigit1 * bs1;
32:             deci1 /= 2;
33:             bs1 *= 10;
34:         }
35:         printf("Binary Number: %d",binary1);
36:     }
37:     if(choice<1 || choice>2){
38:         printf("Invalid Choice!");
39:     }
40:     return 0;
41:    
42: }
</file>

<file path="Q7.c">
 1: #include<stdio.h>
 2: int main(){
 3:     
 4: 
 5:     for(int i=1; i<=5; i++){
 6:         for(int j=1; j<=i; j++){
 7:             printf("%d",(j+1)%2);
 8:         }
 9: 
10:         if(i!=5){
11:             for(int spc=1; spc<2*(5-i)+1; spc++){
12:                 printf(" ");
13:             }
14:             for(int j=1; j<=i; j++){
15:                 printf("%d",(j+1)%2);
16:             }
17:         }
18: 
19:         else{
20:             for(int j=i+1; j<=2*i-1; j++){
21:                 printf("%d",(j+1)%2);
22:             }
23:         }
24:         printf("\n");
25:     }
26:     return 0;
27: }
</file>

<file path="Q8.c">
 1: #include<stdio.h>
 2: int main(){
 3: 
 4: 
 5:     int i,a=0,b=1,c=0;
 6:     printf("Enter a number: ");
 7:     scanf("%d",&i);
 8:     
 9:     printf("Fibonacci Series till %d: \n",i);
10:     while(a<=i){
11:         printf("%d ",a);
12:         c = a + b; 
13:         a = b;
14:         b = c;
15:     }
16:     return 0;
17: }
</file>

<file path="Q9.c">
 1: #include<stdio.h>
 2: int main(){
 3: 
 4: 
 5:     int n,m;
 6: 
 7:     printf("Enter number of rows: ");
 8:     scanf("%d",&n);
 9: 
10:     printf("Enter number of columns: ");
11:     scanf("%d",&m);
12: 
13:     int arr[n][m];
14: 
15:     for(int i=1; i<=n; i++){
16:         for(int j=1; j<=m; j++){
17:             printf("Enter %d,%d element: ",i,j);
18:             scanf("%d",&arr[i][j]);
19:         }
20:     }
21: 
22:     
23:     for(int i=1; i<=n; i++){
24:         for(int j=1; j<=m; j++){
25:             if(arr[i][j]==99){
26:                 printf("99 occurs at %d,%d in the array\n",i,j);
27:             }
28:         }
29:     }
30: 
31:     return 0;
32: }
</file>

<file path="README.md">
1: # FOCP1--ASSIGNMENT
2: Assignment 1
</file>

</files>
