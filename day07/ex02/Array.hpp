#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array{
private:
	T *_array;
	unsigned int _size;
public:
	Array<T>(int sizeArr = 1){
		if (sizeArr == 0)
			++sizeArr;
		if (sizeArr < 0)
			throw ErrorSize();
		_size = sizeArr;
		_array = new T[sizeArr];
		for (int i = 0; i < sizeArr; ++i)
			_array[i] = 0;
	}
	~Array<T>(void){
		if (_size)
			delete[] _array;
	}
	Array<T>(Array<T> const &copy){
		 this->operator=(copy);
	}
	Array<T> &operator=(Array<T> const &op){
		if (&op == this)
			return (*this);
		this->_size = op.size();
		_array = new T[this->_size];
		for (int i = 0; i < (int)this->_size; ++i)
			_array[i] = op._array[i];
		return (*this);
	}
	T &operator[](int inx){
		if (inx < 0 || inx >= (int)_size)
			throw ErrorIndex();
		return (_array[inx]);
	}
	unsigned int size(void) const{return (_size);}
	class ErrorIndex : public std::exception{
		virtual const char *what() const throw(){return "error index";}
	};
	class ErrorSize : public std::exception{
		virtual const char *what() const throw(){return "error size";}
	};
};

#endif