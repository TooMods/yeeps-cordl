#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUnityServices)
namespace System::Threading::Tasks {
class Task;
}
namespace Unity::Services::Core {
class InitializationOptions;
}
namespace Unity::Services::Core {
struct ServicesInitializationState;
}
// Forward declare root types
namespace Unity::Services::Core {
class IUnityServices;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::IUnityServices);
// Type: Unity.Services.Core::IUnityServices
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core {
// Is value type: false
// CS Name: ::Unity.Services.Core::IUnityServices*
class CORDL_TYPE IUnityServices {
public:
  // Declarations
  __declspec(property(get = get_Options))::Unity::Services::Core::InitializationOptions* Options;

  __declspec(property(get = get_State))::Unity::Services::Core::ServicesInitializationState State;

  /// @brief Method InitializeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* InitializeAsync(::Unity::Services::Core::InitializationOptions* options);

  /// @brief Method get_Options, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Core::InitializationOptions* get_Options();

  /// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Services::Core::ServicesInitializationState get_State();

  // Ctor Parameters [CppParam { name: "", ty: "IUnityServices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IUnityServices(IUnityServices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IUnityServices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUnityServices(IUnityServices const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Core
NEED_NO_BOX(::Unity::Services::Core::IUnityServices);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::IUnityServices*, "Unity.Services.Core", "IUnityServices");
