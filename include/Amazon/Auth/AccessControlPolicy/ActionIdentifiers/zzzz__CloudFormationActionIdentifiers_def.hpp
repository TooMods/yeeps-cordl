#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CloudFormationActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class CloudFormationActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudFormationActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::CloudFormationActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::CloudFormationActionIdentifiers*
class CORDL_TYPE CloudFormationActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllCloudFormationActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllCloudFormationActions, put = setStaticF_AllCloudFormationActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllCloudFormationActions;

  /// @brief Field CreateStack, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateStack, put = setStaticF_CreateStack))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateStack;

  /// @brief Field DeleteStack, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteStack, put = setStaticF_DeleteStack))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteStack;

  /// @brief Field DescribeStackEvents, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeStackEvents, put = setStaticF_DescribeStackEvents))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeStackEvents;

  /// @brief Field DescribeStackResource, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeStackResource, put = setStaticF_DescribeStackResource))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeStackResource;

  /// @brief Field DescribeStackResources, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeStackResources, put = setStaticF_DescribeStackResources))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeStackResources;

  /// @brief Field DescribeStacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeStacks, put = setStaticF_DescribeStacks))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeStacks;

  /// @brief Field EstimateTemplateCost, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EstimateTemplateCost, put = setStaticF_EstimateTemplateCost))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* EstimateTemplateCost;

  /// @brief Field GetTemplate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetTemplate, put = setStaticF_GetTemplate))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetTemplate;

  /// @brief Field ListStackResources, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListStackResources, put = setStaticF_ListStackResources))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListStackResources;

  /// @brief Field ListStacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListStacks, put = setStaticF_ListStacks))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListStacks;

  /// @brief Field UpdateStack, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateStack, put = setStaticF_UpdateStack))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateStack;

  /// @brief Field ValidateTemplate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ValidateTemplate, put = setStaticF_ValidateTemplate))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ValidateTemplate;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllCloudFormationActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateStack();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteStack();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeStackEvents();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeStackResource();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeStackResources();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeStacks();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_EstimateTemplateCost();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetTemplate();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListStackResources();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListStacks();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateStack();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ValidateTemplate();

  static inline void setStaticF_AllCloudFormationActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateStack(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteStack(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeStackEvents(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeStackResource(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeStackResources(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeStacks(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_EstimateTemplateCost(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetTemplate(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListStackResources(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListStacks(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateStack(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ValidateTemplate(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CloudFormationActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CloudFormationActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CloudFormationActionIdentifiers(CloudFormationActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CloudFormationActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CloudFormationActionIdentifiers(CloudFormationActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudFormationActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudFormationActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudFormationActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers",
                       "CloudFormationActionIdentifiers");
