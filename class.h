//class.h
#ifnmdef CLASS_H
#define CLASS_H
class Class;
{
	public:
		Class();
		Class(int a, char b);
		void SetYear(int a);
		int GetYear();
		void SetStream(char b);
		char GetStream();
	private:
		int year;
		char stream;
}

