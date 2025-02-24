#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ActivationServices)
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class ConstructionCall;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Proxies {
class RemotingProxy;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class ActivationServices;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Activation::ActivationServices);
// Type: System.Runtime.Remoting.Activation::ActivationServices
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Activation::ActivationServices*
class CORDL_TYPE ActivationServices : public ::System::Object {
public:
  // Declarations
  /// @brief Field _constructionActivator, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__constructionActivator, put = setStaticF__constructionActivator))::System::Runtime::Remoting::Activation::IActivator* _constructionActivator;

  /// @brief Method Activate, addr 0x184f5e4, size 0x228, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::IMessage* Activate(::System::Runtime::Remoting::Proxies::RemotingProxy* proxy,
                                                                           ::System::Runtime::Remoting::Messaging::ConstructionCall* ctorCall);

  /// @brief Method AllocateUninitializedClassInstance, addr 0x185a060, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Object* AllocateUninitializedClassInstance(::System::Type* type);

  /// @brief Method CreateConstructionCall, addr 0x184dd34, size 0x9bc, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::ConstructionCall* CreateConstructionCall(::System::Type* type, ::StringW activationUrl,
                                                                                                 ::ArrayW<::System::Object*, ::Array<::System::Object*>*> activationAttributes);

  /// @brief Method CreateInstanceFromMessage, addr 0x1859c60, size 0x400, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::IMessage* CreateInstanceFromMessage(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);

  /// @brief Method CreateProxyForType, addr 0x185a064, size 0x140, virtual false, abstract: false, final false
  static inline ::System::Object* CreateProxyForType(::System::Type* type);

  /// @brief Method EnableProxyActivation, addr 0x185a1a4, size 0x8, virtual false, abstract: false, final false
  static inline void EnableProxyActivation(::System::Type* type, bool enable);

  /// @brief Method RemoteActivate, addr 0x1859a3c, size 0x1d0, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::IMessage* RemoteActivate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);

  static inline ::System::Runtime::Remoting::Activation::IActivator* getStaticF__constructionActivator();

  /// @brief Method get_ConstructionActivator, addr 0x18599a0, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Activation::IActivator* get_ConstructionActivator();

  static inline void setStaticF__constructionActivator(::System::Runtime::Remoting::Activation::IActivator* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActivationServices();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActivationServices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActivationServices(ActivationServices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActivationServices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActivationServices(ActivationServices const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Activation::ActivationServices, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Activation
NEED_NO_BOX(::System::Runtime::Remoting::Activation::ActivationServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::ActivationServices*, "System.Runtime.Remoting.Activation", "ActivationServices");
