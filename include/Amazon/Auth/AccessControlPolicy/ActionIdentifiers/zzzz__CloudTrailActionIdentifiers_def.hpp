#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CloudTrailActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class CloudTrailActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudTrailActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::CloudTrailActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::CloudTrailActionIdentifiers*
class CORDL_TYPE CloudTrailActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllCloudTrailActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllCloudTrailActions, put = setStaticF_AllCloudTrailActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllCloudTrailActions;

  /// @brief Field CreateTrail, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateTrail, put = setStaticF_CreateTrail))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateTrail;

  /// @brief Field DeleteTrail, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteTrail, put = setStaticF_DeleteTrail))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteTrail;

  /// @brief Field DescribeTrails, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeTrails, put = setStaticF_DescribeTrails))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeTrails;

  /// @brief Field GetTrailStatus, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetTrailStatus, put = setStaticF_GetTrailStatus))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetTrailStatus;

  /// @brief Field StartLogging, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StartLogging, put = setStaticF_StartLogging))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* StartLogging;

  /// @brief Field StopLogging, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StopLogging, put = setStaticF_StopLogging))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* StopLogging;

  /// @brief Field UpdateTrail, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateTrail, put = setStaticF_UpdateTrail))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateTrail;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllCloudTrailActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateTrail();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteTrail();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeTrails();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetTrailStatus();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_StartLogging();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_StopLogging();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateTrail();

  static inline void setStaticF_AllCloudTrailActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateTrail(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteTrail(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeTrails(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetTrailStatus(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_StartLogging(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_StopLogging(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateTrail(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CloudTrailActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CloudTrailActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CloudTrailActionIdentifiers(CloudTrailActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CloudTrailActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CloudTrailActionIdentifiers(CloudTrailActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudTrailActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudTrailActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudTrailActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "CloudTrailActionIdentifiers");
