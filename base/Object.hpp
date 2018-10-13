ifndef JABA_LANG_OBJECT
#define JABA_LANG_OBJECT

// https://docs.oracle.com/en/java/javase/11/docs/api/java.base/java/lang/Object.html

namespace jaba
{
	namespace lang
	{
		// Class Object is the root of the class hierarchy. Every class has Object as a superclass. 
		class Object
		{
		public:
			
			// Constructs a new object.
			Object();
			
			// Returns the runtime class of this Object. 
			// TODO: Class<?> getClass()
			
			// Returns a hash code value for the object. 
			virtual int hashCode();
			
			// Indicates whether some other object is "equal to" this one.
			virtual bool equals(Object obj);
			
			// Returns a string representation of the object.
			// TODO: virtual String toString()
			
			// Wakes up a single thread that is waiting on this object's monitor. 
			void notify();
			
			// Wakes up all threads that are waiting on this object's monitor.
			void notifyAll();
			
			// Causes the current thread to wait until it is awakened, typically by being notified or interrupted.
			void wait();
			
			// Causes the current thread to wait until it is awakened, typically by being notified or interrupted, or until a certain amount of real time has elapsed.
			void wait(long timeoutMillis);
			
			// Causes the current thread to wait until it is awakened, typically by being notified or interrupted, or until a certain amount of real time has elapsed.
			void wait(long timeoutMillis, int nanos); 
			
		protected:
			
			// Creates and returns a copy of this object.
			virtual Object clone();
			
		};
	}
}
#endif    //JABA_LANG_OBJECT