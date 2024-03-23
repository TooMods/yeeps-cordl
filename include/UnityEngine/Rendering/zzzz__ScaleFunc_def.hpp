#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScaleFunc)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ScaleFunc;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ScaleFunc);
// Type: UnityEngine.Rendering::ScaleFunc
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::ScaleFunc*
class CORDL_TYPE ScaleFunc : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1a0a330, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2Int size, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1a0a3b4, size 0x28, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2Int EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1a0a31c, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2Int Invoke(::UnityEngine::Vector2Int size);

  static inline ::UnityEngine::Rendering::ScaleFunc* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1a0a258, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScaleFunc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScaleFunc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScaleFunc(ScaleFunc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScaleFunc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScaleFunc(ScaleFunc const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ScaleFunc, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ScaleFunc);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ScaleFunc*, "UnityEngine.Rendering", "ScaleFunc");
