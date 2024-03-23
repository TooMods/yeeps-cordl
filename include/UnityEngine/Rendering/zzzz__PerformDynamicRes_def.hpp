#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformDynamicRes)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class PerformDynamicRes;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::PerformDynamicRes);
// Type: UnityEngine.Rendering::PerformDynamicRes
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::PerformDynamicRes*
class CORDL_TYPE PerformDynamicRes : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1bd0e34, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1bd0e54, size 0x28, virtual true, abstract: false, final false
  inline float_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1bd0e20, size 0x14, virtual true, abstract: false, final false
  inline float_t Invoke();

  static inline ::UnityEngine::Rendering::PerformDynamicRes* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1bd0d64, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformDynamicRes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformDynamicRes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformDynamicRes(PerformDynamicRes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformDynamicRes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformDynamicRes(PerformDynamicRes const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::PerformDynamicRes, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::PerformDynamicRes);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::PerformDynamicRes*, "UnityEngine.Rendering", "PerformDynamicRes");
