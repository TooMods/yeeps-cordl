#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeStyleUpdater)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class VisualTreeStyleUpdaterTraversal;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeStyleUpdater;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeStyleUpdater);
// Type: UnityEngine.UIElements::VisualTreeStyleUpdater
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::VisualTreeStyleUpdater*
class CORDL_TYPE VisualTreeStyleUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
  // Declarations
  /// @brief Field m_ApplyStyleUpdateList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ApplyStyleUpdateList,
                      put = __cordl_internal_set_m_ApplyStyleUpdateList))::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* m_ApplyStyleUpdateList;

  /// @brief Field m_IsApplyingStyles, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsApplyingStyles, put = __cordl_internal_set_m_IsApplyingStyles)) bool m_IsApplyingStyles;

  /// @brief Field m_LastVersion, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastVersion, put = __cordl_internal_set_m_LastVersion)) uint32_t m_LastVersion;

  /// @brief Field m_StyleContextHierarchyTraversal, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StyleContextHierarchyTraversal,
                      put = __cordl_internal_set_m_StyleContextHierarchyTraversal))::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal* m_StyleContextHierarchyTraversal;

  /// @brief Field m_TransitionPropertyUpdateList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TransitionPropertyUpdateList,
                      put = __cordl_internal_set_m_TransitionPropertyUpdateList))::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* m_TransitionPropertyUpdateList;

  /// @brief Field m_Version, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) uint32_t m_Version;

  __declspec(property(get = get_profilerMarker))::Unity::Profiling::ProfilerMarker profilerMarker;

  /// @brief Field s_Description, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Description, put = setStaticF_s_Description))::StringW s_Description;

  /// @brief Field s_ProfilerMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ProfilerMarker, put = setStaticF_s_ProfilerMarker))::Unity::Profiling::ProfilerMarker s_ProfilerMarker;

  /// @brief Method ApplyStyles, addr 0x2a3f1f8, size 0xe0, virtual false, abstract: false, final false
  inline void ApplyStyles();

  static inline ::UnityEngine::UIElements::VisualTreeStyleUpdater* New_ctor();

  /// @brief Method OnVersionChanged, addr 0x2a3eda4, size 0xc8, virtual true, abstract: false, final false
  inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method Update, addr 0x2a3eeec, size 0x30c, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_ApplyStyleUpdateList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*> const& __cordl_internal_get_m_ApplyStyleUpdateList() const;

  constexpr bool const& __cordl_internal_get_m_IsApplyingStyles() const;

  constexpr bool& __cordl_internal_get_m_IsApplyingStyles();

  constexpr uint32_t const& __cordl_internal_get_m_LastVersion() const;

  constexpr uint32_t& __cordl_internal_get_m_LastVersion();

  constexpr ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*& __cordl_internal_get_m_StyleContextHierarchyTraversal();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*> const& __cordl_internal_get_m_StyleContextHierarchyTraversal() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_TransitionPropertyUpdateList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*> const&
  __cordl_internal_get_m_TransitionPropertyUpdateList() const;

  constexpr uint32_t const& __cordl_internal_get_m_Version() const;

  constexpr uint32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_ApplyStyleUpdateList(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_IsApplyingStyles(bool value);

  constexpr void __cordl_internal_set_m_LastVersion(uint32_t value);

  constexpr void __cordl_internal_set_m_StyleContextHierarchyTraversal(::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal* value);

  constexpr void __cordl_internal_set_m_TransitionPropertyUpdateList(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_Version(uint32_t value);

  /// @brief Method .ctor, addr 0x2a3f65c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_s_Description();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProfilerMarker();

  /// @brief Method get_profilerMarker, addr 0x2a3ed4c, size 0x58, virtual true, abstract: false, final false
  inline ::Unity::Profiling::ProfilerMarker get_profilerMarker();

  static inline void setStaticF_s_Description(::StringW value);

  static inline void setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeStyleUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeStyleUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeStyleUpdater(VisualTreeStyleUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeStyleUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeStyleUpdater(VisualTreeStyleUpdater const&) = delete;

  /// @brief Field m_ApplyStyleUpdateList, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ___m_ApplyStyleUpdateList;

  /// @brief Field m_TransitionPropertyUpdateList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ___m_TransitionPropertyUpdateList;

  /// @brief Field m_IsApplyingStyles, offset: 0x30, size: 0x1, def value: None
  bool ___m_IsApplyingStyles;

  /// @brief Field m_Version, offset: 0x34, size: 0x4, def value: None
  uint32_t ___m_Version;

  /// @brief Field m_LastVersion, offset: 0x38, size: 0x4, def value: None
  uint32_t ___m_LastVersion;

  /// @brief Field m_StyleContextHierarchyTraversal, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal* ___m_StyleContextHierarchyTraversal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeStyleUpdater, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeStyleUpdater, ___m_ApplyStyleUpdateList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeStyleUpdater, ___m_TransitionPropertyUpdateList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeStyleUpdater, ___m_IsApplyingStyles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeStyleUpdater, ___m_Version) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeStyleUpdater, ___m_LastVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeStyleUpdater, ___m_StyleContextHierarchyTraversal) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeStyleUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeStyleUpdater*, "UnityEngine.UIElements", "VisualTreeStyleUpdater");
