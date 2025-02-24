#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClickDetector)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __ClickDetector__ButtonClickStatus;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ClickDetector;
}
namespace UnityEngine::UIElements {
class __ClickDetector__ButtonClickStatus;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ClickDetector);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus);
// Type: ::ButtonClickStatus
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::ClickDetector::ButtonClickStatus*
class CORDL_TYPE __ClickDetector__ButtonClickStatus : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ClickCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ClickCount, put = __cordl_internal_set_m_ClickCount)) int32_t m_ClickCount;

  /// @brief Field m_LastPointerDownTime, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastPointerDownTime, put = __cordl_internal_set_m_LastPointerDownTime)) int64_t m_LastPointerDownTime;

  /// @brief Field m_PointerDownPosition, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_m_PointerDownPosition, put = __cordl_internal_set_m_PointerDownPosition))::UnityEngine::Vector3 m_PointerDownPosition;

  /// @brief Field m_Target, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Target, put = __cordl_internal_set_m_Target))::UnityEngine::UIElements::VisualElement* m_Target;

  static inline ::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus* New_ctor();

  /// @brief Method Reset, addr 0x2095154, size 0x64, virtual false, abstract: false, final false
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_m_ClickCount() const;

  constexpr int32_t& __cordl_internal_get_m_ClickCount();

  constexpr int64_t const& __cordl_internal_get_m_LastPointerDownTime() const;

  constexpr int64_t& __cordl_internal_get_m_LastPointerDownTime();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PointerDownPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PointerDownPosition();

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Target();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_Target() const;

  constexpr void __cordl_internal_set_m_ClickCount(int32_t value);

  constexpr void __cordl_internal_set_m_LastPointerDownTime(int64_t value);

  constexpr void __cordl_internal_set_m_PointerDownPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_Target(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x2094ee4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ClickDetector__ButtonClickStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ClickDetector__ButtonClickStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ClickDetector__ButtonClickStatus(__ClickDetector__ButtonClickStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ClickDetector__ButtonClickStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ClickDetector__ButtonClickStatus(__ClickDetector__ButtonClickStatus const&) = delete;

  /// @brief Field m_Target, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Target;

  /// @brief Field m_PointerDownPosition, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_PointerDownPosition;

  /// @brief Field m_LastPointerDownTime, offset: 0x28, size: 0x8, def value: None
  int64_t ___m_LastPointerDownTime;

  /// @brief Field m_ClickCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_ClickCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus, ___m_Target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus, ___m_PointerDownPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus, ___m_LastPointerDownTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus, ___m_ClickCount) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ClickDetector
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ClickDetector*
class CORDL_TYPE ClickDetector : public ::System::Object {
public:
  // Declarations
  using ButtonClickStatus = ::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus;

  /// @brief Field <s_DoubleClickTime>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__s_DoubleClickTime_k__BackingField, put = setStaticF__s_DoubleClickTime_k__BackingField)) int32_t _s_DoubleClickTime_k__BackingField;

  /// @brief Field m_ClickStatus, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClickStatus,
                      put = __cordl_internal_set_m_ClickStatus))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus*>* m_ClickStatus;

  /// @brief Method CancelClickTracking, addr 0x20956bc, size 0xfc, virtual false, abstract: false, final false
  inline void CancelClickTracking(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ContainsPointer, addr 0x209559c, size 0x120, virtual false, abstract: false, final false
  static inline bool ContainsPointer(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::Vector2 position);

  static inline ::UnityEngine::UIElements::ClickDetector* New_ctor();

  /// @brief Method ProcessEvent, addr 0x20957b8, size 0x51c, virtual false, abstract: false, final false
  inline void ProcessEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method SendClickEvent, addr 0x20951b8, size 0x3e4, virtual false, abstract: false, final false
  inline void SendClickEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method StartClickTracking, addr 0x2094eec, size 0x268, virtual false, abstract: false, final false
  inline void StartClickTracking(::UnityEngine::UIElements::EventBase* evt);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus*>*& __cordl_internal_get_m_ClickStatus();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus*>*> const&
  __cordl_internal_get_m_ClickStatus() const;

  constexpr void __cordl_internal_set_m_ClickStatus(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus*>* value);

  /// @brief Method .ctor, addr 0x2094c84, size 0x260, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__s_DoubleClickTime_k__BackingField();

  /// @brief Method get_s_DoubleClickTime, addr 0x2094bd0, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_s_DoubleClickTime();

  static inline void setStaticF__s_DoubleClickTime_k__BackingField(int32_t value);

  /// @brief Method set_s_DoubleClickTime, addr 0x2094c28, size 0x5c, virtual false, abstract: false, final false
  static inline void set_s_DoubleClickTime(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClickDetector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClickDetector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClickDetector(ClickDetector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClickDetector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClickDetector(ClickDetector const&) = delete;

  /// @brief Field m_ClickStatus, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus*>* ___m_ClickStatus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ClickDetector, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ClickDetector, ___m_ClickStatus) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ClickDetector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ClickDetector*, "UnityEngine.UIElements", "ClickDetector");
NEED_NO_BOX(::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ClickDetector__ButtonClickStatus*, "UnityEngine.UIElements", "ClickDetector/ButtonClickStatus");
