#include "Object.hpp"
#include <functional>
#include <sstream>

namespace jaba
{
	namespace lang
	{
		/// <summary>
		/// Returns a hash code value for the object.
		/// </summary>
		/// <returns>A hash code value for this object.</returns>
		int Object::hashCode() const
		{
			// Use STL hash class to perform the hashing
			std::hash<std::string> lHasher;

			// Get the value of the "this" object address and convert it to string
			std::ostringstream lAddressValueStream;
			lAddressValueStream << this;
			std::string lAddress = lAddressValueStream.str();

			// Apply hashing to the address string
			size_t lHashValue = lHasher(lAddress);
			int lResult = static_cast<int>(lHashValue);

			return lResult;
		}


	}
}