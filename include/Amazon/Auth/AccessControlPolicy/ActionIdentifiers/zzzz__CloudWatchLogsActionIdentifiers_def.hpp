#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CloudWatchLogsActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class CloudWatchLogsActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudWatchLogsActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::CloudWatchLogsActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::CloudWatchLogsActionIdentifiers*
class CORDL_TYPE CloudWatchLogsActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllCloudWatchLogsActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllCloudWatchLogsActions, put = setStaticF_AllCloudWatchLogsActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllCloudWatchLogsActions;

  /// @brief Field CreateLogGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateLogGroup, put = setStaticF_CreateLogGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateLogGroup;

  /// @brief Field CreateLogStream, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateLogStream, put = setStaticF_CreateLogStream))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateLogStream;

  /// @brief Field DeleteLogGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteLogGroup, put = setStaticF_DeleteLogGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteLogGroup;

  /// @brief Field DeleteLogStream, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteLogStream, put = setStaticF_DeleteLogStream))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteLogStream;

  /// @brief Field DeleteMetricFilter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteMetricFilter, put = setStaticF_DeleteMetricFilter))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteMetricFilter;

  /// @brief Field DeleteRetentionPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteRetentionPolicy, put = setStaticF_DeleteRetentionPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteRetentionPolicy;

  /// @brief Field DescribeLogGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeLogGroups, put = setStaticF_DescribeLogGroups))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeLogGroups;

  /// @brief Field DescribeLogStreams, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeLogStreams, put = setStaticF_DescribeLogStreams))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeLogStreams;

  /// @brief Field DescribeMetricFilters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeMetricFilters, put = setStaticF_DescribeMetricFilters))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeMetricFilters;

  /// @brief Field GetLogEvents, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetLogEvents, put = setStaticF_GetLogEvents))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetLogEvents;

  /// @brief Field PutLogEvents, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutLogEvents, put = setStaticF_PutLogEvents))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutLogEvents;

  /// @brief Field PutMetricFilter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutMetricFilter, put = setStaticF_PutMetricFilter))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutMetricFilter;

  /// @brief Field PutRetentionPolicy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutRetentionPolicy, put = setStaticF_PutRetentionPolicy))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutRetentionPolicy;

  /// @brief Field TestMetricFilter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TestMetricFilter, put = setStaticF_TestMetricFilter))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* TestMetricFilter;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllCloudWatchLogsActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateLogGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateLogStream();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteLogGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteLogStream();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteMetricFilter();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteRetentionPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeLogGroups();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeLogStreams();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeMetricFilters();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetLogEvents();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutLogEvents();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutMetricFilter();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutRetentionPolicy();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_TestMetricFilter();

  static inline void setStaticF_AllCloudWatchLogsActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateLogGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateLogStream(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteLogGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteLogStream(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteMetricFilter(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteRetentionPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeLogGroups(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeLogStreams(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeMetricFilters(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetLogEvents(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutLogEvents(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutMetricFilter(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutRetentionPolicy(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_TestMetricFilter(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CloudWatchLogsActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CloudWatchLogsActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CloudWatchLogsActionIdentifiers(CloudWatchLogsActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CloudWatchLogsActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CloudWatchLogsActionIdentifiers(CloudWatchLogsActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudWatchLogsActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudWatchLogsActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudWatchLogsActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers",
                       "CloudWatchLogsActionIdentifiers");
