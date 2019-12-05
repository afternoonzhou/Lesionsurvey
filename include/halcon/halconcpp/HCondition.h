/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 13.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HCONDITION
#define HCPP_HCONDITION

namespace HalconCpp
{

// Represents an instance of a condition synchronization object.
class LIntExport HCondition : public HToolBase
{

public:

  // Create an uninitialized instance
  HCondition():HToolBase() {}

  // Copy constructor
  HCondition(const HCondition& source) : HToolBase(source) {}

  // Create HCondition from handle, taking ownership
  explicit HCondition(Hlong handle);

  // Set new handle, taking ownership
  void SetHandle(Hlong handle);



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // create_condition: Create a condition variable synchronization object.
  explicit HCondition(const HTuple& AttribName, const HTuple& AttribValue);

  // create_condition: Create a condition variable synchronization object.
  explicit HCondition(const HString& AttribName, const HString& AttribValue);

  // create_condition: Create a condition variable synchronization object.
  explicit HCondition(const char* AttribName, const char* AttribValue);




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Signal a condition synchronization object.
  void BroadcastCondition() const;

  // Signal a condition synchronization object.
  void SignalCondition() const;

  // Bounded wait on the signal of a condition synchronization object.
  void TimedWaitCondition(const HMutex& MutexHandle, Hlong Timeout) const;

  // wait on the signal of a condition synchronization object.
  void WaitCondition(const HMutex& MutexHandle) const;

  // Create a condition variable synchronization object.
  void CreateCondition(const HTuple& AttribName, const HTuple& AttribValue);

  // Create a condition variable synchronization object.
  void CreateCondition(const HString& AttribName, const HString& AttribValue);

  // Create a condition variable synchronization object.
  void CreateCondition(const char* AttribName, const char* AttribValue);

};

// forward declarations and types for internal array implementation

template<class T> class HSmartPtr;
template<class T> class HToolArrayRef;

typedef HToolArrayRef<HCondition> HConditionArrayRef;
typedef HSmartPtr< HConditionArrayRef > HConditionArrayPtr;


// Represents multiple tool instances
class LIntExport HConditionArray : public HToolArray
{

public:

  // Create empty array
  HConditionArray();

  // Create array from native array of tool instances
  HConditionArray(HCondition* classes, Hlong length);

  // Copy constructor
  HConditionArray(const HConditionArray &tool_array);

  // Destructor
  virtual ~HConditionArray();

  // Assignment operator
  HConditionArray &operator=(const HConditionArray &tool_array);

  // Clears array and all tool instances
  virtual void Clear();

  // Get array of native tool instances
  const HCondition* Tools() const;

  // Get number of tools
  virtual Hlong Length() const;

  // Create tool array from tuple of handles
  virtual void SetFromTuple(const HTuple& handles);

  // Get tuple of handles for tool array
  virtual HTuple ConvertToTuple() const;

protected:

// Smart pointer to internal data container
   HConditionArrayPtr *mArrayPtr;
};

}

#endif
