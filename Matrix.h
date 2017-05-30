class Matrix{
	private:
		static int m_instanceCounter;
	protected:
		int m_Zeilen;
		int m_Spalten;
		
	public:
		virtual ~Matrix();
		Matrix(int m, int n);
		virtual void ausgabe();
		static int getCounter();
		float* m_Element;
};