#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasUpdateRegistry)
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::UI::Collections {
template <typename T> class IndexedSet_1;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::UI {
class CanvasUpdateRegistry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::CanvasUpdateRegistry);
// Type: UnityEngine.UI::CanvasUpdateRegistry
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::CanvasUpdateRegistry*
class CORDL_TYPE CanvasUpdateRegistry : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_CanvasUpdateProfilerStrings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CanvasUpdateProfilerStrings,
                      put = __cordl_internal_set_m_CanvasUpdateProfilerStrings))::ArrayW<::StringW, ::Array<::StringW>*> m_CanvasUpdateProfilerStrings;

  /// @brief Field m_GraphicRebuildQueue, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GraphicRebuildQueue,
                      put = __cordl_internal_set_m_GraphicRebuildQueue))::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* m_GraphicRebuildQueue;

  /// @brief Field m_LayoutRebuildQueue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LayoutRebuildQueue,
                      put = __cordl_internal_set_m_LayoutRebuildQueue))::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* m_LayoutRebuildQueue;

  /// @brief Field m_PerformingGraphicUpdate, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PerformingGraphicUpdate, put = __cordl_internal_set_m_PerformingGraphicUpdate)) bool m_PerformingGraphicUpdate;

  /// @brief Field m_PerformingLayoutUpdate, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PerformingLayoutUpdate, put = __cordl_internal_set_m_PerformingLayoutUpdate)) bool m_PerformingLayoutUpdate;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityEngine::UI::CanvasUpdateRegistry* s_Instance;

  /// @brief Field s_SortLayoutFunction, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SortLayoutFunction, put = setStaticF_s_SortLayoutFunction))::System::Comparison_1<::UnityEngine::UI::ICanvasElement*>* s_SortLayoutFunction;

  /// @brief Method CleanInvalidItems, addr 0x1ff7368, size 0x2e4, virtual false, abstract: false, final false
  inline void CleanInvalidItems();

  /// @brief Method DisableCanvasElementForRebuild, addr 0x1ff8644, size 0x70, virtual false, abstract: false, final false
  static inline void DisableCanvasElementForRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method InternalDisableCanvasElementForGraphicRebuild, addr 0x1ff8818, size 0x164, virtual false, abstract: false, final false
  inline void InternalDisableCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method InternalDisableCanvasElementForLayoutRebuild, addr 0x1ff86b4, size 0x164, virtual false, abstract: false, final false
  inline void InternalDisableCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method InternalRegisterCanvasElementForGraphicRebuild, addr 0x1ff81dc, size 0xd0, virtual false, abstract: false, final false
  inline bool InternalRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method InternalRegisterCanvasElementForLayoutRebuild, addr 0x1ff8084, size 0x98, virtual false, abstract: false, final false
  inline bool InternalRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method InternalUnRegisterCanvasElementForGraphicRebuild, addr 0x1ff84e0, size 0x164, virtual false, abstract: false, final false
  inline void InternalUnRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method InternalUnRegisterCanvasElementForLayoutRebuild, addr 0x1ff837c, size 0x164, virtual false, abstract: false, final false
  inline void InternalUnRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method IsRebuildingGraphics, addr 0x1ff89d8, size 0x5c, virtual false, abstract: false, final false
  static inline bool IsRebuildingGraphics();

  /// @brief Method IsRebuildingLayout, addr 0x1ff897c, size 0x5c, virtual false, abstract: false, final false
  static inline bool IsRebuildingLayout();

  static inline ::UnityEngine::UI::CanvasUpdateRegistry* New_ctor();

  /// @brief Method ObjectValidForUpdate, addr 0x1ff7298, size 0xd0, virtual false, abstract: false, final false
  inline bool ObjectValidForUpdate(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method ParentCount, addr 0x1ff7e14, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t ParentCount(::UnityEngine::Transform* child);

  /// @brief Method PerformUpdate, addr 0x1ff764c, size 0x640, virtual false, abstract: false, final false
  inline void PerformUpdate();

  /// @brief Method RegisterCanvasElementForGraphicRebuild, addr 0x1ff817c, size 0x60, virtual false, abstract: false, final false
  static inline void RegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method RegisterCanvasElementForLayoutRebuild, addr 0x1ff8024, size 0x60, virtual false, abstract: false, final false
  static inline void RegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method SortLayoutList, addr 0x1ff7ed4, size 0x150, virtual false, abstract: false, final false
  static inline int32_t SortLayoutList(::UnityEngine::UI::ICanvasElement* x, ::UnityEngine::UI::ICanvasElement* y);

  /// @brief Method TryRegisterCanvasElementForGraphicRebuild, addr 0x1ff82ac, size 0x60, virtual false, abstract: false, final false
  static inline bool TryRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method TryRegisterCanvasElementForLayoutRebuild, addr 0x1ff811c, size 0x60, virtual false, abstract: false, final false
  static inline bool TryRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element);

  /// @brief Method UnRegisterCanvasElementForRebuild, addr 0x1ff830c, size 0x70, virtual false, abstract: false, final false
  static inline void UnRegisterCanvasElementForRebuild(::UnityEngine::UI::ICanvasElement* element);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_CanvasUpdateProfilerStrings() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_CanvasUpdateProfilerStrings();

  constexpr ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>*& __cordl_internal_get_m_GraphicRebuildQueue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>*> const& __cordl_internal_get_m_GraphicRebuildQueue() const;

  constexpr ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>*& __cordl_internal_get_m_LayoutRebuildQueue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>*> const& __cordl_internal_get_m_LayoutRebuildQueue() const;

  constexpr bool const& __cordl_internal_get_m_PerformingGraphicUpdate() const;

  constexpr bool& __cordl_internal_get_m_PerformingGraphicUpdate();

  constexpr bool const& __cordl_internal_get_m_PerformingLayoutUpdate() const;

  constexpr bool& __cordl_internal_get_m_PerformingLayoutUpdate();

  constexpr void __cordl_internal_set_m_CanvasUpdateProfilerStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_GraphicRebuildQueue(::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* value);

  constexpr void __cordl_internal_set_m_LayoutRebuildQueue(::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* value);

  constexpr void __cordl_internal_set_m_PerformingGraphicUpdate(bool value);

  constexpr void __cordl_internal_set_m_PerformingLayoutUpdate(bool value);

  /// @brief Method .ctor, addr 0x1ff6f84, size 0x26c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UI::CanvasUpdateRegistry* getStaticF_s_Instance();

  static inline ::System::Comparison_1<::UnityEngine::UI::ICanvasElement*>* getStaticF_s_SortLayoutFunction();

  /// @brief Method get_instance, addr 0x1ff71f0, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UI::CanvasUpdateRegistry* get_instance();

  static inline void setStaticF_s_Instance(::UnityEngine::UI::CanvasUpdateRegistry* value);

  static inline void setStaticF_s_SortLayoutFunction(::System::Comparison_1<::UnityEngine::UI::ICanvasElement*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CanvasUpdateRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CanvasUpdateRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CanvasUpdateRegistry(CanvasUpdateRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CanvasUpdateRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CanvasUpdateRegistry(CanvasUpdateRegistry const&) = delete;

  /// @brief Field m_PerformingLayoutUpdate, offset: 0x10, size: 0x1, def value: None
  bool ___m_PerformingLayoutUpdate;

  /// @brief Field m_PerformingGraphicUpdate, offset: 0x11, size: 0x1, def value: None
  bool ___m_PerformingGraphicUpdate;

  /// @brief Field m_CanvasUpdateProfilerStrings, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_CanvasUpdateProfilerStrings;

  /// @brief Field m_LayoutRebuildQueue, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* ___m_LayoutRebuildQueue;

  /// @brief Field m_GraphicRebuildQueue, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* ___m_GraphicRebuildQueue;

  /// @brief Field m_CullingUpdateProfilerString offset 0xffffffff size 0x8
  static constexpr ::ConstString m_CullingUpdateProfilerString{ u"ClipperRegistry.Cull" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::CanvasUpdateRegistry, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasUpdateRegistry, ___m_PerformingLayoutUpdate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasUpdateRegistry, ___m_PerformingGraphicUpdate) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasUpdateRegistry, ___m_CanvasUpdateProfilerStrings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasUpdateRegistry, ___m_LayoutRebuildQueue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::CanvasUpdateRegistry, ___m_GraphicRebuildQueue) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::CanvasUpdateRegistry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CanvasUpdateRegistry*, "UnityEngine.UI", "CanvasUpdateRegistry");
