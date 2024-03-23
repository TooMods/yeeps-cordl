#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderFunc_1)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphContext;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
template <typename PassData> class RenderFunc_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::RenderFunc`1
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// cpp template
template <typename PassData>
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::RenderFunc`1<PassData>*
class CORDL_TYPE RenderFunc_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(PassData data, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* renderGraphContext, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(PassData data, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* renderGraphContext);

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderFunc_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderFunc_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderFunc_1(RenderFunc_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderFunc_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderFunc_1(RenderFunc_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderFunc`1");
