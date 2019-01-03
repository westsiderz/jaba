#ifndef JABA_LANG_OBJECT
#define JABA_LANG_OBJECT

// https://docs.oracle.com/en/java/javase/11/docs/api/java.base/java/lang/Object.html

class String;

namespace jaba
{
	namespace lang
	{
		// Class Object is the root of the class hierarchy. Every class has Object as a superclass. 
		class Object
		{
		public:
			// Returns the runtime class of this Object. 
			// TODO: Class<?> getClass()
			
			/// <summary>
			/// Returns a hash code value for the object. The hash code value is the same as the integer value of the object's address.
			/// </summary>
			/// <returns>An integer hash code value for this object.</returns>
			virtual int hashCode() const;
			
			// Indicates whether some other object is "equal to" this one.
			//virtual bool equals(Object obj);
			
			// Returns a string representation of the object.
			//virtual String toString();
			
			// Wakes up a single thread that is waiting on this object's monitor. 
			//void notify();
			
			// Wakes up all threads that are waiting on this object's monitor.
			//void notifyAll();
			
			// Causes the current thread to wait until it is awakened, typically by being notified or interrupted.
			//void wait();
			
			// Causes the current thread to wait until it is awakened, typically by being notified or interrupted, or until a certain amount of real time has elapsed.
			//void wait(long timeoutMillis);
			
			// Causes the current thread to wait until it is awakened, typically by being notified or interrupted, or until a certain amount of real time has elapsed.
			//void wait(long timeoutMillis, int nanos); 
			
		protected:
			
			// Creates and returns a copy of this object.
			//virtual Object clone();
			
		};
	}
}
#endif    //JABA_LANG_OBJECT