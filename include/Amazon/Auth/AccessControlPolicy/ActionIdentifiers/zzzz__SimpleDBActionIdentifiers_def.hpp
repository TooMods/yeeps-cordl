#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SimpleDBActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class SimpleDBActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SimpleDBActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::SimpleDBActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::SimpleDBActionIdentifiers*
class CORDL_TYPE SimpleDBActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllSimpleDBActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllSimpleDBActions, put = setStaticF_AllSimpleDBActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllSimpleDBActions;

  /// @brief Field BatchDeleteAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BatchDeleteAttributes, put = setStaticF_BatchDeleteAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* BatchDeleteAttributes;

  /// @brief Field BatchPutAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BatchPutAttributes, put = setStaticF_BatchPutAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* BatchPutAttributes;

  /// @brief Field CreateDomain, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateDomain, put = setStaticF_CreateDomain))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateDomain;

  /// @brief Field DeleteAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteAttributes, put = setStaticF_DeleteAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteAttributes;

  /// @brief Field DeleteDomain, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteDomain, put = setStaticF_DeleteDomain))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteDomain;

  /// @brief Field DomainMetadata, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DomainMetadata, put = setStaticF_DomainMetadata))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DomainMetadata;

  /// @brief Field GetAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetAttributes, put = setStaticF_GetAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* GetAttributes;

  /// @brief Field ListDomains, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListDomains, put = setStaticF_ListDomains))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListDomains;

  /// @brief Field PutAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PutAttributes, put = setStaticF_PutAttributes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* PutAttributes;

  /// @brief Field Select, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Select, put = setStaticF_Select))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* Select;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllSimpleDBActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_BatchDeleteAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_BatchPutAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateDomain();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteDomain();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DomainMetadata();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_GetAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListDomains();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_PutAttributes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_Select();

  static inline void setStaticF_AllSimpleDBActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_BatchDeleteAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_BatchPutAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateDomain(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteDomain(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DomainMetadata(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_GetAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListDomains(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_PutAttributes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_Select(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleDBActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleDBActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleDBActionIdentifiers(SimpleDBActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleDBActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleDBActionIdentifiers(SimpleDBActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SimpleDBActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SimpleDBActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::SimpleDBActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "SimpleDBActionIdentifiers");
