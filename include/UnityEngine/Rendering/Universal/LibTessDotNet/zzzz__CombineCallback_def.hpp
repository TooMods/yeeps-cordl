#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CombineCallback)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct Vec3;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class CombineCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback);
// Type: UnityEngine.Rendering.Universal.LibTessDotNet::CombineCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.LibTessDotNet::CombineCallback*
class CORDL_TYPE CombineCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2ad3790, size 0x9c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 position, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> data,
                                             ::ArrayW<float_t, ::Array<float_t>*> weights, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2ad382c, size 0xc, virtual true, abstract: false, final false
  inline ::System::Object* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2ad377c, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* Invoke(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 position, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> data,
                                  ::ArrayW<float_t, ::Array<float_t>*> weights);

  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2ad36b8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CombineCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CombineCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CombineCallback(CombineCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CombineCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CombineCallback(CombineCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback*, "UnityEngine.Rendering.Universal.LibTessDotNet", "CombineCallback");
