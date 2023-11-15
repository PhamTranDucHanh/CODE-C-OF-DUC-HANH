int main()
{
	float A; 
	cin>>A;
	if ( 0 <= A < 90){
	    cout<<"first quadrant";
	}
	else if (90 <= A < 180){
	    cout<<"second quadrant";
	}
	else if (180 <= A < 270){
	    cout<<"third quadrant";
	}
	else if (270 <= A < 360){
	    cout<<"fourth quadrant";
	}
	else cout<<"not exist";
}
