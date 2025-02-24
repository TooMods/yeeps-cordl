#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MarshalByRefObject_def.hpp"
CORDL_MODULE_EXPORT(RemoteActivator)
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionReturnMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class RemoteActivator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Activation::RemoteActivator);
// Type: System.Runtime.Remoting.Activation::RemoteActivator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Activation::RemoteActivator*
class CORDL_TYPE RemoteActivator : public ::System::MarshalByRefObject {
public:
  // Declarations
  __declspec(property(get = get_NextActivator))::System::Runtime::Remoting::Activation::IActivator* NextActivator;

  /// @brief Convert operator to "::System::Runtime::Remoting::Activation::IActivator"
  constexpr operator ::System::Runtime::Remoting::Activation::IActivator*() noexcept;

  /// @brief Method Activate, addr 0x185aee0, size 0x47c, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);

  /// @brief Method get_NextActivator, addr 0x185b35c, size 0x40, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Activation::IActivator* get_NextActivator();

  /// @brief Convert to "::System::Runtime::Remoting::Activation::IActivator"
  constexpr ::System::Runtime::Remoting::Activation::IActivator* i___System__Runtime__Remoting__Activation__IActivator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoteActivator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemoteActivator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoteActivator(RemoteActivator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoteActivator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoteActivator(RemoteActivator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Activation::RemoteActivator, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Activation
NEED_NO_BOX(::System::Runtime::Remoting::Activation::RemoteActivator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::RemoteActivator*, "System.Runtime.Remoting.Activation", "RemoteActivator");
