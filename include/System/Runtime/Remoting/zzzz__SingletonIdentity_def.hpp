#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SingletonIdentity)
namespace System::Runtime::Remoting::Contexts {
class Context;
}
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
class SingletonIdentity;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::SingletonIdentity);
// Type: System.Runtime.Remoting::SingletonIdentity
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: ::System.Runtime.Remoting::SingletonIdentity*
class CORDL_TYPE SingletonIdentity : public ::System::Runtime::Remoting::ServerIdentity {
public:
  // Declarations
  /// @brief Method AsyncObjectProcessMessage, addr 0x19821b4, size 0xe8, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                         ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  /// @brief Method GetServerObject, addr 0x1981ef0, size 0x1f0, virtual false, abstract: false, final false
  inline ::System::MarshalByRefObject* GetServerObject();

  static inline ::System::Runtime::Remoting::SingletonIdentity* New_ctor(::StringW objectUri, ::System::Runtime::Remoting::Contexts::Context* context, ::System::Type* objectType);

  /// @brief Method SyncObjectProcessMessage, addr 0x19820e0, size 0xd4, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  /// @brief Method .ctor, addr 0x1980e2c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW objectUri, ::System::Runtime::Remoting::Contexts::Context* context, ::System::Type* objectType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SingletonIdentity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SingletonIdentity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SingletonIdentity(SingletonIdentity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SingletonIdentity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SingletonIdentity(SingletonIdentity const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::SingletonIdentity, 0x70>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::SingletonIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::SingletonIdentity*, "System.Runtime.Remoting", "SingletonIdentity");
