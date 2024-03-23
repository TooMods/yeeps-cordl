#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ProfilingSample)
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Profiling {
class CustomSampler;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ProfilingSample;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ProfilingSample);
// Type: UnityEngine.Rendering::ProfilingSample
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::ProfilingSample
struct CORDL_TYPE ProfilingSample {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x19fdf74, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x19fdf7c, size 0x8c, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method .ctor, addr 0x19fdefc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW format, ::System::Object* arg);

  /// @brief Method .ctor, addr 0x19fdf38, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method .ctor, addr 0x19fde74, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW name, ::UnityEngine::Profiling::CustomSampler* sampler);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilingSample();

  // Ctor Parameters [CppParam { name: "m_Cmd", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: None }, CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Sampler", ty: "::UnityEngine::Profiling::CustomSampler*", modifiers: "", def_value: None
  // }]
  constexpr ProfilingSample(::UnityEngine::Rendering::CommandBuffer* m_Cmd, ::StringW m_Name, bool m_Disposed, ::UnityEngine::Profiling::CustomSampler* m_Sampler) noexcept;

  /// @brief Field m_Cmd, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* m_Cmd;

  /// @brief Field m_Name, offset: 0x8, size: 0x8, def value: None
  ::StringW m_Name;

  /// @brief Field m_Disposed, offset: 0x10, size: 0x1, def value: None
  bool m_Disposed;

  /// @brief Field m_Sampler, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Profiling::CustomSampler* m_Sampler;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProfilingSample, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProfilingSample, m_Cmd) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProfilingSample, m_Name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProfilingSample, m_Disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProfilingSample, m_Sampler) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProfilingSample, "UnityEngine.Rendering", "ProfilingSample");
