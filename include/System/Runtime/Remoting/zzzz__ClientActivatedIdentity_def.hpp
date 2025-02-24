#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ClientActivatedIdentity)
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System {
class MarshalByRefObject;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ClientActivatedIdentity;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ClientActivatedIdentity);
// Type: System.Runtime.Remoting::ClientActivatedIdentity
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: ::System.Runtime.Remoting::ClientActivatedIdentity*
class CORDL_TYPE ClientActivatedIdentity : public ::System::Runtime::Remoting::ServerIdentity {
public:
  // Declarations
  /// @brief Field _targetThis, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__targetThis, put = __cordl_internal_set__targetThis))::System::MarshalByRefObject* _targetThis;

  /// @brief Method AsyncObjectProcessMessage, addr 0x1981dfc, size 0xf4, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                         ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  /// @brief Method GetServerObject, addr 0x1981cb0, size 0x8, virtual false, abstract: false, final false
  inline ::System::MarshalByRefObject* GetServerObject();

  static inline ::System::Runtime::Remoting::ClientActivatedIdentity* New_ctor(::StringW objectUri, ::System::Type* objectType);

  /// @brief Method OnLifetimeExpired, addr 0x1981cc0, size 0x5c, virtual true, abstract: false, final false
  inline void OnLifetimeExpired();

  /// @brief Method SetClientProxy, addr 0x1981cb8, size 0x8, virtual false, abstract: false, final false
  inline void SetClientProxy(::System::MarshalByRefObject* obj);

  /// @brief Method SyncObjectProcessMessage, addr 0x1981d1c, size 0xe0, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  constexpr ::System::MarshalByRefObject*& __cordl_internal_get__targetThis();

  constexpr ::cordl_internals::to_const_pointer<::System::MarshalByRefObject*> const& __cordl_internal_get__targetThis() const;

  constexpr void __cordl_internal_set__targetThis(::System::MarshalByRefObject* value);

  /// @brief Method .ctor, addr 0x1980d5c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW objectUri, ::System::Type* objectType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientActivatedIdentity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClientActivatedIdentity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClientActivatedIdentity(ClientActivatedIdentity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClientActivatedIdentity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClientActivatedIdentity(ClientActivatedIdentity const&) = delete;

  /// @brief Field _targetThis, offset: 0x70, size: 0x8, def value: None
  ::System::MarshalByRefObject* ____targetThis;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ClientActivatedIdentity, 0x78>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ClientActivatedIdentity, ____targetThis) == 0x70, "Offset mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ClientActivatedIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ClientActivatedIdentity*, "System.Runtime.Remoting", "ClientActivatedIdentity");
