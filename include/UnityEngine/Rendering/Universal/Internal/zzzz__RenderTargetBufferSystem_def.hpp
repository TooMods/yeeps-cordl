#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__RenderTargetBufferSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTargetBufferSystem)
namespace UnityEngine::Rendering::Universal::Internal {
struct __RenderTargetBufferSystem__SwapBuffer;
}
namespace UnityEngine::Rendering::Universal {
struct RenderTargetHandle;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class RenderTargetBufferSystem;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct __RenderTargetBufferSystem__SwapBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer);
// Type: ::SwapBuffer
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: ::RenderTargetBufferSystem::SwapBuffer
struct CORDL_TYPE __RenderTargetBufferSystem__SwapBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderTargetBufferSystem__SwapBuffer();

  // Ctor Parameters [CppParam { name: "rt", ty: "::UnityEngine::Rendering::Universal::RenderTargetHandle", modifiers: "", def_value: None }, CppParam { name: "name", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "msaa", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __RenderTargetBufferSystem__SwapBuffer(::UnityEngine::Rendering::Universal::RenderTargetHandle rt, int32_t name, int32_t msaa) noexcept;

  /// @brief Field rt, offset: 0x0, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle rt;

  /// @brief Field name, offset: 0x30, size: 0x4, def value: None
  int32_t name;

  /// @brief Field msaa, offset: 0x34, size: 0x4, def value: None
  int32_t msaa;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer, rt) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer, name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer, msaa) == 0x34, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: UnityEngine.Rendering.Universal.Internal::RenderTargetBufferSystem
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 134, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::RenderTargetBufferSystem*
class CORDL_TYPE RenderTargetBufferSystem : public ::System::Object {
public:
  // Declarations
  using SwapBuffer = ::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer;

  __declspec(property(get = get_backBuffer))::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer backBuffer;

  __declspec(property(get = get_frontBuffer))::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer frontBuffer;

  /// @brief Field m_A, offset 0x10, size 0x38
  __declspec(property(get = __cordl_internal_get_m_A, put = __cordl_internal_set_m_A))::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer m_A;

  /// @brief Field m_AisBackBuffer, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_m_AisBackBuffer, put = setStaticF_m_AisBackBuffer)) bool m_AisBackBuffer;

  /// @brief Field m_AllowMSAA, offset 0x84, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowMSAA, put = __cordl_internal_set_m_AllowMSAA)) bool m_AllowMSAA;

  /// @brief Field m_B, offset 0x48, size 0x38
  __declspec(property(get = __cordl_internal_get_m_B, put = __cordl_internal_set_m_B))::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer m_B;

  /// @brief Field m_Desc, offset 0xffffffff, size 0x34
  static __declspec(property(get = getStaticF_m_Desc, put = setStaticF_m_Desc))::UnityEngine::RenderTextureDescriptor m_Desc;

  /// @brief Field m_FilterMode, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FilterMode, put = __cordl_internal_set_m_FilterMode))::UnityEngine::FilterMode m_FilterMode;

  /// @brief Field m_RTisAllocated, offset 0x85, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RTisAllocated, put = __cordl_internal_set_m_RTisAllocated)) bool m_RTisAllocated;

  /// @brief Method Clear, addr 0x16154ac, size 0x90, virtual false, abstract: false, final false
  inline void Clear(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method EnableMSAA, addr 0x16156c0, size 0xc, virtual false, abstract: false, final false
  inline void EnableMSAA(bool enable);

  /// @brief Method GetBackBuffer, addr 0x1614fe4, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderTargetHandle GetBackBuffer();

  /// @brief Method GetBackBuffer, addr 0x1615018, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderTargetHandle GetBackBuffer(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetBufferA, addr 0x16156ac, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderTargetHandle GetBufferA();

  /// @brief Method GetFrontBuffer, addr 0x16151a4, size 0x2a8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderTargetHandle GetFrontBuffer(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method Initialize, addr 0x161506c, size 0x138, virtual false, abstract: false, final false
  inline void Initialize(::UnityEngine::Rendering::CommandBuffer* cmd);

  static inline ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem* New_ctor(::StringW name);

  /// @brief Method SetCameraSettings, addr 0x161553c, size 0xc8, virtual false, abstract: false, final false
  inline void SetCameraSettings(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor desc, ::UnityEngine::FilterMode filterMode);

  /// @brief Method SetCameraSettings, addr 0x1615604, size 0xa8, virtual false, abstract: false, final false
  inline void SetCameraSettings(::UnityEngine::RenderTextureDescriptor desc, ::UnityEngine::FilterMode filterMode);

  /// @brief Method Swap, addr 0x161544c, size 0x60, virtual false, abstract: false, final false
  inline void Swap();

  constexpr ::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer const& __cordl_internal_get_m_A() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer& __cordl_internal_get_m_A();

  constexpr bool const& __cordl_internal_get_m_AllowMSAA() const;

  constexpr bool& __cordl_internal_get_m_AllowMSAA();

  constexpr ::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer const& __cordl_internal_get_m_B() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer& __cordl_internal_get_m_B();

  constexpr ::UnityEngine::FilterMode const& __cordl_internal_get_m_FilterMode() const;

  constexpr ::UnityEngine::FilterMode& __cordl_internal_get_m_FilterMode();

  constexpr bool const& __cordl_internal_get_m_RTisAllocated() const;

  constexpr bool& __cordl_internal_get_m_RTisAllocated();

  constexpr void __cordl_internal_set_m_A(::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer value);

  constexpr void __cordl_internal_set_m_AllowMSAA(bool value);

  constexpr void __cordl_internal_set_m_B(::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer value);

  constexpr void __cordl_internal_set_m_FilterMode(::UnityEngine::FilterMode value);

  constexpr void __cordl_internal_set_m_RTisAllocated(bool value);

  /// @brief Method .ctor, addr 0x1614ef4, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  static inline bool getStaticF_m_AisBackBuffer();

  static inline ::UnityEngine::RenderTextureDescriptor getStaticF_m_Desc();

  /// @brief Method get_backBuffer, addr 0x1614dd4, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer get_backBuffer();

  /// @brief Method get_frontBuffer, addr 0x1614e64, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer get_frontBuffer();

  static inline void setStaticF_m_AisBackBuffer(bool value);

  static inline void setStaticF_m_Desc(::UnityEngine::RenderTextureDescriptor value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTargetBufferSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderTargetBufferSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderTargetBufferSystem(RenderTargetBufferSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderTargetBufferSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderTargetBufferSystem(RenderTargetBufferSystem const&) = delete;

  /// @brief Field m_A, offset: 0x10, size: 0x38, def value: None
  ::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer ___m_A;

  /// @brief Field m_B, offset: 0x48, size: 0x38, def value: None
  ::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer ___m_B;

  /// @brief Field m_FilterMode, offset: 0x80, size: 0x4, def value: None
  ::UnityEngine::FilterMode ___m_FilterMode;

  /// @brief Field m_AllowMSAA, offset: 0x84, size: 0x1, def value: None
  bool ___m_AllowMSAA;

  /// @brief Field m_RTisAllocated, offset: 0x85, size: 0x1, def value: None
  bool ___m_RTisAllocated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem, 0x88>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem, ___m_A) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem, ___m_B) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem, ___m_FilterMode) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem, ___m_AllowMSAA) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem, ___m_RTisAllocated) == 0x85, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*, "UnityEngine.Rendering.Universal.Internal", "RenderTargetBufferSystem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer, "UnityEngine.Rendering.Universal.Internal", "RenderTargetBufferSystem/SwapBuffer");
