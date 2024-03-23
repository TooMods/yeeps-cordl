#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugLogSender)
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace GlobalNamespace {
class __DebugLogSender____c;
}
namespace GlobalNamespace {
class __LogManager__OnSendLogsFailed;
}
namespace GlobalNamespace {
class __LogManager__OnSendLogsSuccess;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class DebugLogSender;
}
namespace GlobalNamespace {
class __DebugLogSender____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DebugLogSender);
MARK_REF_PTR_T(::GlobalNamespace::__DebugLogSender____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugLogSender::<>c*
class CORDL_TYPE __DebugLogSender____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__DebugLogSender____c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0))::GlobalNamespace::__LogManager__OnSendLogsSuccess* __9__5_0;

  /// @brief Field <>9__5_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_1, put = setStaticF___9__5_1))::GlobalNamespace::__LogManager__OnSendLogsFailed* __9__5_1;

  static inline ::GlobalNamespace::__DebugLogSender____c* New_ctor();

  /// @brief Method <OnSendLogsButtonPressed>b__5_0, addr 0x1547804, size 0xa0, virtual false, abstract: false, final false
  inline void _OnSendLogsButtonPressed_b__5_0();

  /// @brief Method <OnSendLogsButtonPressed>b__5_1, addr 0x15478a4, size 0x110, virtual false, abstract: false, final false
  inline void _OnSendLogsButtonPressed_b__5_1(::StringW errType);

  /// @brief Method .ctor, addr 0x15477fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__DebugLogSender____c* getStaticF___9();

  static inline ::GlobalNamespace::__LogManager__OnSendLogsSuccess* getStaticF___9__5_0();

  static inline ::GlobalNamespace::__LogManager__OnSendLogsFailed* getStaticF___9__5_1();

  static inline void setStaticF___9(::GlobalNamespace::__DebugLogSender____c* value);

  static inline void setStaticF___9__5_0(::GlobalNamespace::__LogManager__OnSendLogsSuccess* value);

  static inline void setStaticF___9__5_1(::GlobalNamespace::__LogManager__OnSendLogsFailed* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DebugLogSender____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DebugLogSender____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DebugLogSender____c(__DebugLogSender____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DebugLogSender____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DebugLogSender____c(__DebugLogSender____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DebugLogSender____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::DebugLogSender
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DebugLogSender*
class CORDL_TYPE DebugLogSender : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__DebugLogSender____c;

  /// @brief Field buttonContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_buttonContainer, put = __cordl_internal_set_buttonContainer))::UnityW<::UnityEngine::GameObject> buttonContainer;

  /// @brief Field nextCanSendLogsTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_nextCanSendLogsTime, put = __cordl_internal_set_nextCanSendLogsTime)) float_t nextCanSendLogsTime;

  /// @brief Field sendButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sendButton, put = __cordl_internal_set_sendButton))::UnityW<::GlobalNamespace::SimpleButtonController> sendButton;

  static inline ::GlobalNamespace::DebugLogSender* New_ctor();

  /// @brief Method OnEnable, addr 0x15473a8, size 0x144, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnSendLogsButtonPressed, addr 0x15474ec, size 0x2a4, virtual false, abstract: false, final false
  inline void OnSendLogsButtonPressed();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_buttonContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_buttonContainer();

  constexpr float_t const& __cordl_internal_get_nextCanSendLogsTime() const;

  constexpr float_t& __cordl_internal_get_nextCanSendLogsTime();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_sendButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_sendButton();

  constexpr void __cordl_internal_set_buttonContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_nextCanSendLogsTime(float_t value);

  constexpr void __cordl_internal_set_sendButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  /// @brief Method .ctor, addr 0x1547790, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugLogSender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugLogSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugLogSender(DebugLogSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugLogSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugLogSender(DebugLogSender const&) = delete;

  /// @brief Field buttonContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___buttonContainer;

  /// @brief Field sendButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___sendButton;

  /// @brief Field nextCanSendLogsTime, offset: 0x28, size: 0x4, def value: None
  float_t ___nextCanSendLogsTime;

  /// @brief Field SEND_LOGS_DELAY offset 0xffffffff size 0x4
  static constexpr float_t SEND_LOGS_DELAY{ 5.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DebugLogSender, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugLogSender, ___buttonContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugLogSender, ___sendButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugLogSender, ___nextCanSendLogsTime) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DebugLogSender);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DebugLogSender*, "", "DebugLogSender");
NEED_NO_BOX(::GlobalNamespace::__DebugLogSender____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DebugLogSender____c*, "", "DebugLogSender/<>c");
