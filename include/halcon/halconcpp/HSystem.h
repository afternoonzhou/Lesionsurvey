/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 13.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HSYSTEM
#define HCPP_HSYSTEM

namespace HalconCpp
{

// Class grouping system information and manipulation related functionality.
class LIntExport HSystem
{

public:




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Delaying the execution of the program.
  static void WaitSeconds(double Seconds);

  // Execute a system command.
  static void SystemCall(const HString& Command);

  // Execute a system command.
  static void SystemCall(const char* Command);

  // Set HALCON system parameters.
  static void SetSystem(const HTuple& SystemParameter, const HTuple& Value);

  // Set HALCON system parameters.
  static void SetSystem(const HString& SystemParameter, const HString& Value);

  // Set HALCON system parameters.
  static void SetSystem(const char* SystemParameter, const char* Value);

  // Activating and deactivating of HALCON control modes.
  static void SetCheck(const HTuple& Check);

  // Activating and deactivating of HALCON control modes.
  static void SetCheck(const HString& Check);

  // Activating and deactivating of HALCON control modes.
  static void SetCheck(const char* Check);

  // Initialization of the HALCON system.
  static void ResetObjDb(Hlong DefaultImageWidth, Hlong DefaultImageHeight, Hlong DefaultChannels);

  // Get current value of HALCON system parameters.
  static HTuple GetSystem(const HTuple& Query);

  // Get current value of HALCON system parameters.
  static HTuple GetSystem(const HString& Query);

  // Get current value of HALCON system parameters.
  static HTuple GetSystem(const char* Query);

  // State of the HALCON control modes.
  static HTuple GetCheck();

  // Inquiry after the error text of a HALCON error number.
  static HString GetErrorText(Hlong ErrorCode);

  // Passed Time.
  static double CountSeconds();

  // Number of entries in the HALCON database.
  static Hlong CountRelation(const HString& RelationName);

  // Number of entries in the HALCON database.
  static Hlong CountRelation(const char* RelationName);

  // Returns the extended error information for the calling thread's last HALCON error.
  static HString GetExtendedErrorInfo(Hlong* ErrorCode, HString* ErrorMessage);

  // Query of used modules and the module key.
  static HTuple GetModules(Hlong* ModuleKey);

  // Inquiring for possible settings of the HALCON debugging tool.
  static HTuple QuerySpy(HTuple* Values);

  // Control of the HALCON Debugging Tools.
  static void SetSpy(const HString& Class, const HTuple& Value);

  // Control of the HALCON Debugging Tools.
  static void SetSpy(const HString& Class, const HString& Value);

  // Control of the HALCON Debugging Tools.
  static void SetSpy(const char* Class, const char* Value);

  // Current configuration of the HALCON debugging-tool.
  static HTuple GetSpy(const HString& Class);

  // Current configuration of the HALCON debugging-tool.
  static HTuple GetSpy(const char* Class);

  // Set AOP information for operators.
  static void SetAopInfo(const HTuple& OperatorName, const HTuple& IndexName, const HTuple& IndexValue, const HString& InfoName, const HTuple& InfoValue);

  // Set AOP information for operators.
  static void SetAopInfo(const HString& OperatorName, const HString& IndexName, const HString& IndexValue, const HString& InfoName, Hlong InfoValue);

  // Set AOP information for operators.
  static void SetAopInfo(const char* OperatorName, const char* IndexName, const char* IndexValue, const char* InfoName, Hlong InfoValue);

  // Return AOP information for operators. 
  static HTuple GetAopInfo(const HTuple& OperatorName, const HTuple& IndexName, const HTuple& IndexValue, const HString& InfoName);

  // Return AOP information for operators. 
  static HString GetAopInfo(const HString& OperatorName, const HTuple& IndexName, const HTuple& IndexValue, const HString& InfoName);

  // Return AOP information for operators. 
  static HString GetAopInfo(const char* OperatorName, const HTuple& IndexName, const HTuple& IndexValue, const char* InfoName);

  // Query indexing structure of AOP information for operators. 
  static HTuple QueryAopInfo(const HTuple& OperatorName, const HTuple& IndexName, const HTuple& IndexValue, HTuple* Value);

  // Query indexing structure of AOP information for operators. 
  static HTuple QueryAopInfo(const HString& OperatorName, const HString& IndexName, const HString& IndexValue, HTuple* Value);

  // Query indexing structure of AOP information for operators. 
  static HTuple QueryAopInfo(const char* OperatorName, const char* IndexName, const char* IndexValue, HTuple* Value);

  // Check hardware regarding its potential for automatic operator parallelization.
  static void OptimizeAop(const HTuple& OperatorName, const HTuple& IconicType, const HTuple& FileName, const HTuple& GenParamName, const HTuple& GenParamValue);

  // Check hardware regarding its potential for automatic operator parallelization.
  static void OptimizeAop(const HString& OperatorName, const HString& IconicType, const HString& FileName, const HTuple& GenParamName, const HTuple& GenParamValue);

  // Check hardware regarding its potential for automatic operator parallelization.
  static void OptimizeAop(const char* OperatorName, const char* IconicType, const char* FileName, const HTuple& GenParamName, const HTuple& GenParamValue);

  // Write knowledge about hardware dependent behavior of automatic operator parallelization to file.
  static void WriteAopKnowledge(const HString& FileName, const HTuple& GenParamName, const HTuple& GenParamValue);

  // Write knowledge about hardware dependent behavior of automatic operator parallelization to file.
  static void WriteAopKnowledge(const HString& FileName, const HString& GenParamName, const HString& GenParamValue);

  // Write knowledge about hardware dependent behavior of automatic operator parallelization to file.
  static void WriteAopKnowledge(const char* FileName, const char* GenParamName, const char* GenParamValue);

  // Load knowledge about hardware dependent behavior of automatic operator parallelization.
  static HTuple ReadAopKnowledge(const HString& FileName, const HTuple& GenParamName, const HTuple& GenParamValue, HTuple* OperatorNames);

  // Load knowledge about hardware dependent behavior of automatic operator parallelization.
  static HTuple ReadAopKnowledge(const HString& FileName, const HString& GenParamName, const HString& GenParamValue, HString* OperatorNames);

  // Load knowledge about hardware dependent behavior of automatic operator parallelization.
  static HTuple ReadAopKnowledge(const char* FileName, const char* GenParamName, const char* GenParamValue, HString* OperatorNames);

  // Specify a window type.
  static void SetWindowType(const HString& WindowType);

  // Specify a window type.
  static void SetWindowType(const char* WindowType);

  // Get window characteristics.
  static HTuple GetWindowAttr(const HString& AttributeName);

  // Get window characteristics.
  static HTuple GetWindowAttr(const char* AttributeName);

  // Set window characteristics.
  static void SetWindowAttr(const HString& AttributeName, const HTuple& AttributeValue);

  // Set window characteristics.
  static void SetWindowAttr(const HString& AttributeName, const HString& AttributeValue);

  // Set window characteristics.
  static void SetWindowAttr(const char* AttributeName, const char* AttributeValue);

  // Query all available window types.
  static HTuple QueryWindowType();

};

}

#endif
