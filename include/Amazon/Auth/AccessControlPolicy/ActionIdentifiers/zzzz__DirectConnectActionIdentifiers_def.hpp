#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DirectConnectActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class DirectConnectActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::DirectConnectActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::DirectConnectActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::DirectConnectActionIdentifiers*
class CORDL_TYPE DirectConnectActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllDirectConnectActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllDirectConnectActions, put = setStaticF_AllDirectConnectActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllDirectConnectActions;

  /// @brief Field CreateConnection, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateConnection, put = setStaticF_CreateConnection))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateConnection;

  /// @brief Field CreatePrivateVirtualInterface, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreatePrivateVirtualInterface,
                             put = setStaticF_CreatePrivateVirtualInterface))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreatePrivateVirtualInterface;

  /// @brief Field CreatePublicVirtualInterface, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreatePublicVirtualInterface,
                             put = setStaticF_CreatePublicVirtualInterface))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreatePublicVirtualInterface;

  /// @brief Field DeleteConnection, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteConnection, put = setStaticF_DeleteConnection))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteConnection;

  /// @brief Field DeleteVirtualInterface, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteVirtualInterface, put = setStaticF_DeleteVirtualInterface))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteVirtualInterface;

  /// @brief Field DescribeConnectionDetail, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeConnectionDetail, put = setStaticF_DescribeConnectionDetail))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeConnectionDetail;

  /// @brief Field DescribeConnections, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeConnections, put = setStaticF_DescribeConnections))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeConnections;

  /// @brief Field DescribeOfferingDetail, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeOfferingDetail, put = setStaticF_DescribeOfferingDetail))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeOfferingDetail;

  /// @brief Field DescribeOfferings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeOfferings, put = setStaticF_DescribeOfferings))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeOfferings;

  /// @brief Field DescribeVirtualGateways, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeVirtualGateways, put = setStaticF_DescribeVirtualGateways))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeVirtualGateways;

  /// @brief Field DescribeVirtualInterfaces, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeVirtualInterfaces, put = setStaticF_DescribeVirtualInterfaces))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeVirtualInterfaces;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllDirectConnectActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateConnection();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreatePrivateVirtualInterface();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreatePublicVirtualInterface();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteConnection();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteVirtualInterface();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeConnectionDetail();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeConnections();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeOfferingDetail();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeOfferings();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeVirtualGateways();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeVirtualInterfaces();

  static inline void setStaticF_AllDirectConnectActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateConnection(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreatePrivateVirtualInterface(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreatePublicVirtualInterface(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteConnection(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteVirtualInterface(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeConnectionDetail(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeConnections(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeOfferingDetail(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeOfferings(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeVirtualGateways(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeVirtualInterfaces(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectConnectActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DirectConnectActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DirectConnectActionIdentifiers(DirectConnectActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DirectConnectActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DirectConnectActionIdentifiers(DirectConnectActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::DirectConnectActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::DirectConnectActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::DirectConnectActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "DirectConnectActionIdentifiers");
