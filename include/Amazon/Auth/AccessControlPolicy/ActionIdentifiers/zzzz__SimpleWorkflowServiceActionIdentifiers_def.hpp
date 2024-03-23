#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SimpleWorkflowServiceActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class SimpleWorkflowServiceActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SimpleWorkflowServiceActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::SimpleWorkflowServiceActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::SimpleWorkflowServiceActionIdentifiers*
class CORDL_TYPE SimpleWorkflowServiceActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllSimpleWorkflowServiceActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllSimpleWorkflowServiceActions,
                             put = setStaticF_AllSimpleWorkflowServiceActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllSimpleWorkflowServiceActions;

  /// @brief Field CancelTimer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CancelTimer, put = setStaticF_CancelTimer))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CancelTimer;

  /// @brief Field CancelWorkflowExecution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CancelWorkflowExecution, put = setStaticF_CancelWorkflowExecution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CancelWorkflowExecution;

  /// @brief Field CompleteWorkflowExecution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CompleteWorkflowExecution, put = setStaticF_CompleteWorkflowExecution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CompleteWorkflowExecution;

  /// @brief Field ContinueAsNewWorkflowExecution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ContinueAsNewWorkflowExecution,
                             put = setStaticF_ContinueAsNewWorkflowExecution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ContinueAsNewWorkflowExecution;

  /// @brief Field CountClosedWorkflowExecutions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CountClosedWorkflowExecutions,
                             put = setStaticF_CountClosedWorkflowExecutions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CountClosedWorkflowExecutions;

  /// @brief Field CountOpenWorkflowExecutions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CountOpenWorkflowExecutions,
                             put = setStaticF_CountOpenWorkflowExecutions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CountOpenWorkflowExecutions;

  /// @brief Field CountPendingActivityTasks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CountPendingActivityTasks, put = setStaticF_CountPendingActivityTasks))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CountPendingActivityTasks;

  /// @brief Field CountPendingDecisionTasks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CountPendingDecisionTasks, put = setStaticF_CountPendingDecisionTasks))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CountPendingDecisionTasks;

  /// @brief Field DeprecateActivityType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeprecateActivityType, put = setStaticF_DeprecateActivityType))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeprecateActivityType;

  /// @brief Field DeprecateDomain, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeprecateDomain, put = setStaticF_DeprecateDomain))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeprecateDomain;

  /// @brief Field DeprecateWorkflowType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeprecateWorkflowType, put = setStaticF_DeprecateWorkflowType))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeprecateWorkflowType;

  /// @brief Field DescribeActivityType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeActivityType, put = setStaticF_DescribeActivityType))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeActivityType;

  /// @brief Field DescribeDomain, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeDomain, put = setStaticF_DescribeDomain))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeDomain;

  /// @brief Field DescribeWorkflowExecution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeWorkflowExecution, put = setStaticF_DescribeWorkflowExecution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeWorkflowExecution;

  /// @brief Field DescribeWorkflowType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeWorkflowType, put = setStaticF_DescribeWorkflowType))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeWorkflowType;

  /// @brief Field FailWorkflowExecution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FailWorkflowExecution, put = setStaticF_FailWorkflowExecution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* FailWorkflowExecution;

  /// @brief Field GetWorkflowExecutionHistory, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetWorkflowExecutionHistory,
                             put = setStaticF_GetWorkflowExecutionHistory))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetWorkflowExecutionHistory;

  /// @brief Field ListActivityTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListActivityTypes, put = setStaticF_ListActivityTypes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListActivityTypes;

  /// @brief Field ListClosedWorkflowExecutions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListClosedWorkflowExecutions,
                             put = setStaticF_ListClosedWorkflowExecutions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListClosedWorkflowExecutions;

  /// @brief Field ListDomains, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListDomains, put = setStaticF_ListDomains))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListDomains;

  /// @brief Field ListOpenWorkflowExecutions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListOpenWorkflowExecutions,
                             put = setStaticF_ListOpenWorkflowExecutions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListOpenWorkflowExecutions;

  /// @brief Field ListWorkflowTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListWorkflowTypes, put = setStaticF_ListWorkflowTypes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListWorkflowTypes;

  /// @brief Field PollForActivityTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PollForActivityTask, put = setStaticF_PollForActivityTask))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PollForActivityTask;

  /// @brief Field PollForDecisionTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PollForDecisionTask, put = setStaticF_PollForDecisionTask))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PollForDecisionTask;

  /// @brief Field RecordActivityTaskHeartbeat, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RecordActivityTaskHeartbeat,
                             put = setStaticF_RecordActivityTaskHeartbeat))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RecordActivityTaskHeartbeat;

  /// @brief Field RecordMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RecordMarker, put = setStaticF_RecordMarker))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RecordMarker;

  /// @brief Field RegisterActivityType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RegisterActivityType, put = setStaticF_RegisterActivityType))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RegisterActivityType;

  /// @brief Field RegisterDomain, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RegisterDomain, put = setStaticF_RegisterDomain))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RegisterDomain;

  /// @brief Field RegisterWorkflowType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RegisterWorkflowType, put = setStaticF_RegisterWorkflowType))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RegisterWorkflowType;

  /// @brief Field RequestCancelActivityTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RequestCancelActivityTask, put = setStaticF_RequestCancelActivityTask))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RequestCancelActivityTask;

  /// @brief Field RequestCancelExternalWorkflowExecution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RequestCancelExternalWorkflowExecution,
                             put = setStaticF_RequestCancelExternalWorkflowExecution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RequestCancelExternalWorkflowExecution;

  /// @brief Field RequestCancelWorkflowExecution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RequestCancelWorkflowExecution,
                             put = setStaticF_RequestCancelWorkflowExecution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RequestCancelWorkflowExecution;

  /// @brief Field RespondActivityTaskCanceled, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RespondActivityTaskCanceled,
                             put = setStaticF_RespondActivityTaskCanceled))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RespondActivityTaskCanceled;

  /// @brief Field RespondActivityTaskCompleted, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RespondActivityTaskCompleted,
                             put = setStaticF_RespondActivityTaskCompleted))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RespondActivityTaskCompleted;

  /// @brief Field RespondActivityTaskFailed, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RespondActivityTaskFailed, put = setStaticF_RespondActivityTaskFailed))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RespondActivityTaskFailed;

  /// @brief Field RespondDecisionTaskCompleted, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RespondDecisionTaskCompleted,
                             put = setStaticF_RespondDecisionTaskCompleted))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RespondDecisionTaskCompleted;

  /// @brief Field ScheduleActivityTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ScheduleActivityTask, put = setStaticF_ScheduleActivityTask))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ScheduleActivityTask;

  /// @brief Field SignalExternalWorkflowExecution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SignalExternalWorkflowExecution,
                             put = setStaticF_SignalExternalWorkflowExecution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SignalExternalWorkflowExecution;

  /// @brief Field SignalWorkflowExecution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SignalWorkflowExecution, put = setStaticF_SignalWorkflowExecution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SignalWorkflowExecution;

  /// @brief Field StartChildWorkflowExecution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StartChildWorkflowExecution,
                             put = setStaticF_StartChildWorkflowExecution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* StartChildWorkflowExecution;

  /// @brief Field StartTimer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StartTimer, put = setStaticF_StartTimer))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* StartTimer;

  /// @brief Field StartWorkflowExecution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StartWorkflowExecution, put = setStaticF_StartWorkflowExecution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* StartWorkflowExecution;

  /// @brief Field TerminateWorkflowExecution, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TerminateWorkflowExecution,
                             put = setStaticF_TerminateWorkflowExecution))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* TerminateWorkflowExecution;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllSimpleWorkflowServiceActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CancelTimer();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CancelWorkflowExecution();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CompleteWorkflowExecution();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ContinueAsNewWorkflowExecution();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CountClosedWorkflowExecutions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CountOpenWorkflowExecutions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CountPendingActivityTasks();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CountPendingDecisionTasks();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeprecateActivityType();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeprecateDomain();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeprecateWorkflowType();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeActivityType();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeDomain();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeWorkflowExecution();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeWorkflowType();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_FailWorkflowExecution();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetWorkflowExecutionHistory();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListActivityTypes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListClosedWorkflowExecutions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListDomains();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListOpenWorkflowExecutions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListWorkflowTypes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PollForActivityTask();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PollForDecisionTask();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RecordActivityTaskHeartbeat();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RecordMarker();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RegisterActivityType();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RegisterDomain();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RegisterWorkflowType();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RequestCancelActivityTask();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RequestCancelExternalWorkflowExecution();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RequestCancelWorkflowExecution();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RespondActivityTaskCanceled();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RespondActivityTaskCompleted();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RespondActivityTaskFailed();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RespondDecisionTaskCompleted();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ScheduleActivityTask();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SignalExternalWorkflowExecution();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SignalWorkflowExecution();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_StartChildWorkflowExecution();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_StartTimer();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_StartWorkflowExecution();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_TerminateWorkflowExecution();

  static inline void setStaticF_AllSimpleWorkflowServiceActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CancelTimer(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CancelWorkflowExecution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CompleteWorkflowExecution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ContinueAsNewWorkflowExecution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CountClosedWorkflowExecutions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CountOpenWorkflowExecutions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CountPendingActivityTasks(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CountPendingDecisionTasks(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeprecateActivityType(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeprecateDomain(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeprecateWorkflowType(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeActivityType(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeDomain(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeWorkflowExecution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeWorkflowType(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_FailWorkflowExecution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetWorkflowExecutionHistory(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListActivityTypes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListClosedWorkflowExecutions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListDomains(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListOpenWorkflowExecutions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListWorkflowTypes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PollForActivityTask(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PollForDecisionTask(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RecordActivityTaskHeartbeat(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RecordMarker(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RegisterActivityType(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RegisterDomain(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RegisterWorkflowType(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RequestCancelActivityTask(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RequestCancelExternalWorkflowExecution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RequestCancelWorkflowExecution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RespondActivityTaskCanceled(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RespondActivityTaskCompleted(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RespondActivityTaskFailed(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RespondDecisionTaskCompleted(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ScheduleActivityTask(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SignalExternalWorkflowExecution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SignalWorkflowExecution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_StartChildWorkflowExecution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_StartTimer(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_StartWorkflowExecution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_TerminateWorkflowExecution(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleWorkflowServiceActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleWorkflowServiceActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleWorkflowServiceActionIdentifiers(SimpleWorkflowServiceActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleWorkflowServiceActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleWorkflowServiceActionIdentifiers(SimpleWorkflowServiceActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SimpleWorkflowServiceActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SimpleWorkflowServiceActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SimpleWorkflowServiceActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers",
                       "SimpleWorkflowServiceActionIdentifiers");
