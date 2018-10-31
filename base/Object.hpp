#ifndef JABA_LANG_OBJECT
#define JABA_LANG_OBJECT

// https://docs.oracle.com/en/java/javase/11/docs/api/java.base/java/lang/Object.html

#include "String.hpp"

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
			/// Returns a hash code value for the object. This method is supported for the benefit of hash tables
			/// such as those provided by HashMap.
			/// The general contract of hashCode is :
			/// Whenever it is invoked on the same object more than once during an execution of a Java application,
			/// the hashCode method must consistently return the same integer, provided no information used in equals 
			/// comparisons on the object is modified.This integer need not remain consistent from one execution of 
			/// an application to another execution of the same application.
			///	If two objects are equal according to the equals(Object) method, then calling the hashCode method on 
			/// each of the two objects must produce the same integer result.
			///	It is not required that if two objects are unequal according to the equals(java.lang.Object) method, 
			/// then calling the hashCode method on each of the two objects must produce distinct integer results. 
			/// However, the programmer should be aware that producing distinct integer results for unequal objects 
			/// may improve the performance of hash tables.
			///	As much as is reasonably practical, the hashCode method defined by class Object does return distinct integers
			/// for distinct objects. (The hashCode may or may not be implemented as some function of an object's memory address
			/// at some point in time.)
			/// </summary>
			/// <returns>A hash code value for this object.</returns>
			virtual int hashCode() const;
			
			// Indicates whether some other object is "equal to" this one.
			virtual bool equals(Object obj);
			
			// Returns a string representation of the object.
			virtual String toString()
			
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
