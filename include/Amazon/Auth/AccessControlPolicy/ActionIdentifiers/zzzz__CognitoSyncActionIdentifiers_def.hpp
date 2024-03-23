#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CognitoSyncActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class CognitoSyncActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CognitoSyncActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::CognitoSyncActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::CognitoSyncActionIdentifiers*
class CORDL_TYPE CognitoSyncActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllCognitoSyncActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllCognitoSyncActions, put = setStaticF_AllCognitoSyncActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllCognitoSyncActions;

  /// @brief Field DeleteDataset, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteDataset, put = setStaticF_DeleteDataset))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteDataset;

  /// @brief Field DescribeDataset, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeDataset, put = setStaticF_DescribeDataset))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeDataset;

  /// @brief Field DescribeIdentityPoolUsage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeIdentityPoolUsage, put = setStaticF_DescribeIdentityPoolUsage))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeIdentityPoolUsage;

  /// @brief Field DescribeIdentityUsage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeIdentityUsage, put = setStaticF_DescribeIdentityUsage))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeIdentityUsage;

  /// @brief Field ListDatasets, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListDatasets, put = setStaticF_ListDatasets))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListDatasets;

  /// @brief Field ListIdentityPoolUsage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListIdentityPoolUsage, put = setStaticF_ListIdentityPoolUsage))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListIdentityPoolUsage;

  /// @brief Field ListRecords, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListRecords, put = setStaticF_ListRecords))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListRecords;

  /// @brief Field UpdateRecords, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateRecords, put = setStaticF_UpdateRecords))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateRecords;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllCognitoSyncActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteDataset();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeDataset();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeIdentityPoolUsage();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeIdentityUsage();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListDatasets();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListIdentityPoolUsage();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListRecords();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateRecords();

  static inline void setStaticF_AllCognitoSyncActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteDataset(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeDataset(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeIdentityPoolUsage(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeIdentityUsage(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListDatasets(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListIdentityPoolUsage(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListRecords(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateRecords(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CognitoSyncActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CognitoSyncActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CognitoSyncActionIdentifiers(CognitoSyncActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CognitoSyncActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CognitoSyncActionIdentifiers(CognitoSyncActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CognitoSyncActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CognitoSyncActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CognitoSyncActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "CognitoSyncActionIdentifiers");
