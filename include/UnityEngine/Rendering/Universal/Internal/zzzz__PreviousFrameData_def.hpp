#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PreviousFrameData)
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class PreviousFrameData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::PreviousFrameData);
// Type: UnityEngine.Rendering.Universal.Internal::PreviousFrameData
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::PreviousFrameData*
class CORDL_TYPE PreviousFrameData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_isFirstFrame, put = set_isFirstFrame)) bool isFirstFrame;

  __declspec(property(get = get_lastFrameActive, put = set_lastFrameActive)) int32_t lastFrameActive;

  /// @brief Field m_IsFirstFrame, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsFirstFrame, put = __cordl_internal_set_m_IsFirstFrame)) bool m_IsFirstFrame;

  /// @brief Field m_LastFrameActive, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastFrameActive, put = __cordl_internal_set_m_LastFrameActive)) int32_t m_LastFrameActive;

  /// @brief Field m_PreviousViewProjectionMatrix, offset 0x58, size 0x40
  __declspec(property(get = __cordl_internal_get_m_PreviousViewProjectionMatrix, put = __cordl_internal_set_m_PreviousViewProjectionMatrix))::UnityEngine::Matrix4x4 m_PreviousViewProjectionMatrix;

  /// @brief Field m_PreviousViewProjectionMatrixStereo, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousViewProjectionMatrixStereo,
                      put = __cordl_internal_set_m_PreviousViewProjectionMatrixStereo))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> m_PreviousViewProjectionMatrixStereo;

  /// @brief Field m_ViewProjectionMatrixStereo, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ViewProjectionMatrixStereo,
                      put = __cordl_internal_set_m_ViewProjectionMatrixStereo))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> m_ViewProjectionMatrixStereo;

  /// @brief Field m_viewProjectionMatrix, offset 0x18, size 0x40
  __declspec(property(get = __cordl_internal_get_m_viewProjectionMatrix, put = __cordl_internal_set_m_viewProjectionMatrix))::UnityEngine::Matrix4x4 m_viewProjectionMatrix;

  __declspec(property(get = get_previousViewProjectionMatrix, put = set_previousViewProjectionMatrix))::UnityEngine::Matrix4x4 previousViewProjectionMatrix;

  __declspec(property(get = get_previousViewProjectionMatrixStereo,
                      put = set_previousViewProjectionMatrixStereo))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> previousViewProjectionMatrixStereo;

  __declspec(property(get = get_viewProjectionMatrix, put = set_viewProjectionMatrix))::UnityEngine::Matrix4x4 viewProjectionMatrix;

  __declspec(property(get = get_viewProjectionMatrixStereo, put = set_viewProjectionMatrixStereo))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> viewProjectionMatrixStereo;

  static inline ::UnityEngine::Rendering::Universal::Internal::PreviousFrameData* New_ctor();

  constexpr bool const& __cordl_internal_get_m_IsFirstFrame() const;

  constexpr bool& __cordl_internal_get_m_IsFirstFrame();

  constexpr int32_t const& __cordl_internal_get_m_LastFrameActive() const;

  constexpr int32_t& __cordl_internal_get_m_LastFrameActive();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_PreviousViewProjectionMatrix() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_PreviousViewProjectionMatrix();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_PreviousViewProjectionMatrixStereo() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_PreviousViewProjectionMatrixStereo();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_ViewProjectionMatrixStereo() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_ViewProjectionMatrixStereo();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_viewProjectionMatrix() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_viewProjectionMatrix();

  constexpr void __cordl_internal_set_m_IsFirstFrame(bool value);

  constexpr void __cordl_internal_set_m_LastFrameActive(int32_t value);

  constexpr void __cordl_internal_set_m_PreviousViewProjectionMatrix(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_m_PreviousViewProjectionMatrixStereo(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_ViewProjectionMatrixStereo(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_viewProjectionMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method .ctor, addr 0x1614c44, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isFirstFrame, addr 0x1614d20, size 0x8, virtual false, abstract: false, final false
  inline bool get_isFirstFrame();

  /// @brief Method get_lastFrameActive, addr 0x1614d34, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lastFrameActive();

  /// @brief Method get_previousViewProjectionMatrix, addr 0x1614d7c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_previousViewProjectionMatrix();

  /// @brief Method get_previousViewProjectionMatrixStereo, addr 0x1614db4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> get_previousViewProjectionMatrixStereo();

  /// @brief Method get_viewProjectionMatrix, addr 0x1614d44, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_viewProjectionMatrix();

  /// @brief Method get_viewProjectionMatrixStereo, addr 0x1614dc4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> get_viewProjectionMatrixStereo();

  /// @brief Method set_isFirstFrame, addr 0x1614d28, size 0xc, virtual false, abstract: false, final false
  inline void set_isFirstFrame(bool value);

  /// @brief Method set_lastFrameActive, addr 0x1614d3c, size 0x8, virtual false, abstract: false, final false
  inline void set_lastFrameActive(int32_t value);

  /// @brief Method set_previousViewProjectionMatrix, addr 0x1614d98, size 0x1c, virtual false, abstract: false, final false
  inline void set_previousViewProjectionMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_previousViewProjectionMatrixStereo, addr 0x1614dbc, size 0x8, virtual false, abstract: false, final false
  inline void set_previousViewProjectionMatrixStereo(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  /// @brief Method set_viewProjectionMatrix, addr 0x1614d60, size 0x1c, virtual false, abstract: false, final false
  inline void set_viewProjectionMatrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_viewProjectionMatrixStereo, addr 0x1614dcc, size 0x8, virtual false, abstract: false, final false
  inline void set_viewProjectionMatrixStereo(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreviousFrameData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PreviousFrameData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreviousFrameData(PreviousFrameData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreviousFrameData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreviousFrameData(PreviousFrameData const&) = delete;

  /// @brief Field m_IsFirstFrame, offset: 0x10, size: 0x1, def value: None
  bool ___m_IsFirstFrame;

  /// @brief Field m_LastFrameActive, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_LastFrameActive;

  /// @brief Field m_viewProjectionMatrix, offset: 0x18, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_viewProjectionMatrix;

  /// @brief Field m_PreviousViewProjectionMatrix, offset: 0x58, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_PreviousViewProjectionMatrix;

  /// @brief Field m_ViewProjectionMatrixStereo, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_ViewProjectionMatrixStereo;

  /// @brief Field m_PreviousViewProjectionMatrixStereo, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_PreviousViewProjectionMatrixStereo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::PreviousFrameData, 0xa8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PreviousFrameData, ___m_IsFirstFrame) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PreviousFrameData, ___m_LastFrameActive) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PreviousFrameData, ___m_viewProjectionMatrix) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PreviousFrameData, ___m_PreviousViewProjectionMatrix) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PreviousFrameData, ___m_ViewProjectionMatrixStereo) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::PreviousFrameData, ___m_PreviousViewProjectionMatrixStereo) == 0xa0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::PreviousFrameData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::PreviousFrameData*, "UnityEngine.Rendering.Universal.Internal", "PreviousFrameData");
