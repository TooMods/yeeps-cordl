#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CloudWatchActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class CloudWatchActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudWatchActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::CloudWatchActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::CloudWatchActionIdentifiers*
class CORDL_TYPE CloudWatchActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllCloudWatchActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllCloudWatchActions, put = setStaticF_AllCloudWatchActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllCloudWatchActions;

  /// @brief Field DeleteAlarms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteAlarms, put = setStaticF_DeleteAlarms))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteAlarms;

  /// @brief Field DescribeAlarmHistory, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeAlarmHistory, put = setStaticF_DescribeAlarmHistory))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeAlarmHistory;

  /// @brief Field DescribeAlarms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeAlarms, put = setStaticF_DescribeAlarms))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeAlarms;

  /// @brief Field DescribeAlarmsForMetric, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeAlarmsForMetric, put = setStaticF_DescribeAlarmsForMetric))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeAlarmsForMetric;

  /// @brief Field DisableAlarmActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DisableAlarmActions, put = setStaticF_DisableAlarmActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DisableAlarmActions;

  /// @brief Field EnableAlarmActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EnableAlarmActions, put = setStaticF_EnableAlarmActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* EnableAlarmActions;

  /// @brief Field GetMetricStatistics, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetMetricStatistics, put = setStaticF_GetMetricStatistics))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetMetricStatistics;

  /// @brief Field ListMetrics, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListMetrics, put = setStaticF_ListMetrics))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListMetrics;

  /// @brief Field PutMetricAlarm, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutMetricAlarm, put = setStaticF_PutMetricAlarm))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutMetricAlarm;

  /// @brief Field PutMetricData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutMetricData, put = setStaticF_PutMetricData))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutMetricData;

  /// @brief Field SetAlarmState, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetAlarmState, put = setStaticF_SetAlarmState))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetAlarmState;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllCloudWatchActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteAlarms();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeAlarmHistory();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeAlarms();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeAlarmsForMetric();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DisableAlarmActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_EnableAlarmActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetMetricStatistics();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListMetrics();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutMetricAlarm();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutMetricData();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetAlarmState();

  static inline void setStaticF_AllCloudWatchActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteAlarms(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeAlarmHistory(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeAlarms(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeAlarmsForMetric(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DisableAlarmActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_EnableAlarmActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetMetricStatistics(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListMetrics(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutMetricAlarm(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutMetricData(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetAlarmState(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CloudWatchActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CloudWatchActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CloudWatchActionIdentifiers(CloudWatchActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CloudWatchActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CloudWatchActionIdentifiers(CloudWatchActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudWatchActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudWatchActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudWatchActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "CloudWatchActionIdentifiers");
