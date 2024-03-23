#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomAutoCycleEffect)
namespace GlobalNamespace {
class __RoomAutoCycleEffect__OnFadeComplete;
}
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
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomAutoCycleEffect;
}
namespace GlobalNamespace {
class __RoomAutoCycleEffect__OnFadeComplete;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RoomAutoCycleEffect);
MARK_REF_PTR_T(::GlobalNamespace::__RoomAutoCycleEffect__OnFadeComplete);
// Type: ::OnFadeComplete
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomAutoCycleEffect::OnFadeComplete*
class CORDL_TYPE __RoomAutoCycleEffect__OnFadeComplete : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1631fbc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1631fdc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1631fa8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__RoomAutoCycleEffect__OnFadeComplete* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x163190c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomAutoCycleEffect__OnFadeComplete();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomAutoCycleEffect__OnFadeComplete", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomAutoCycleEffect__OnFadeComplete(__RoomAutoCycleEffect__OnFadeComplete&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomAutoCycleEffect__OnFadeComplete", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomAutoCycleEffect__OnFadeComplete(__RoomAutoCycleEffect__OnFadeComplete const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomAutoCycleEffect__OnFadeComplete, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RoomAutoCycleEffect
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomAutoCycleEffect*
class CORDL_TYPE RoomAutoCycleEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnFadeComplete = ::GlobalNamespace::__RoomAutoCycleEffect__OnFadeComplete;

  /// @brief Field curFadeAmount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_curFadeAmount, put = __cordl_internal_set_curFadeAmount)) float_t curFadeAmount;

  /// @brief Field defaultAmbientLightColor, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_defaultAmbientLightColor, put = __cordl_internal_set_defaultAmbientLightColor))::UnityEngine::Color defaultAmbientLightColor;

  /// @brief Field defaultDirectionalLightColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_defaultDirectionalLightColor, put = __cordl_internal_set_defaultDirectionalLightColor))::UnityEngine::Color defaultDirectionalLightColor;

  /// @brief Field doTicks, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get_doTicks, put = __cordl_internal_set_doTicks)) bool doTicks;

  /// @brief Field fadeDuration, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_fadeDuration, put = __cordl_internal_set_fadeDuration)) float_t fadeDuration;

  /// @brief Field fadeTimer, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_fadeTimer, put = __cordl_internal_set_fadeTimer)) float_t fadeTimer;

  /// @brief Field finalTickSoundKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_finalTickSoundKey, put = __cordl_internal_set_finalTickSoundKey))::StringW finalTickSoundKey;

  /// @brief Field initialFadeAmount, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_initialFadeAmount, put = __cordl_internal_set_initialFadeAmount)) float_t initialFadeAmount;

  /// @brief Field isFading, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_isFading, put = __cordl_internal_set_isFading)) bool isFading;

  /// @brief Field isRegistered, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegistered, put = __cordl_internal_set_isRegistered)) bool isRegistered;

  /// @brief Field lastTickSecond, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_lastTickSecond, put = __cordl_internal_set_lastTickSecond)) int32_t lastTickSecond;

  /// @brief Field onFadeComplete, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_onFadeComplete, put = __cordl_internal_set_onFadeComplete))::GlobalNamespace::__RoomAutoCycleEffect__OnFadeComplete* onFadeComplete;

  /// @brief Field targetFadeAmount, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_targetFadeAmount, put = __cordl_internal_set_targetFadeAmount)) float_t targetFadeAmount;

  /// @brief Field tickSoundKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tickSoundKey, put = __cordl_internal_set_tickSoundKey))::StringW tickSoundKey;

  /// @brief Field volumeCurve, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_volumeCurve, put = __cordl_internal_set_volumeCurve))::UnityEngine::AnimationCurve* volumeCurve;

  /// @brief Method DestroySelf, addr 0x1631a50, size 0x268, virtual false, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method Initialize, addr 0x1631544, size 0x1c4, virtual false, abstract: false, final false
  inline void Initialize(float_t timeIntoTransitionWindow);

  static inline ::GlobalNamespace::RoomAutoCycleEffect* New_ctor();

  /// @brief Method OnIsCreativeModeUpdated, addr 0x1631870, size 0x9c, virtual false, abstract: false, final false
  inline void OnIsCreativeModeUpdated(bool newIsCreativeMode);

  /// @brief Method OnRoomUnloaded, addr 0x16319c8, size 0x88, virtual false, abstract: false, final false
  inline void OnRoomUnloaded();

  /// @brief Method SetFade, addr 0x1631cb8, size 0x9c, virtual false, abstract: false, final false
  inline void SetFade(float_t amount);

  /// @brief Method TransitionFade, addr 0x1631708, size 0xac, virtual false, abstract: false, final false
  inline void TransitionFade(float_t target, float_t duration, bool doTicks, ::GlobalNamespace::__RoomAutoCycleEffect__OnFadeComplete* onFadeComplete);

  /// @brief Method Update, addr 0x1631d54, size 0x24c, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_curFadeAmount() const;

  constexpr float_t& __cordl_internal_get_curFadeAmount();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_defaultAmbientLightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_defaultAmbientLightColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_defaultDirectionalLightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_defaultDirectionalLightColor();

  constexpr bool const& __cordl_internal_get_doTicks() const;

  constexpr bool& __cordl_internal_get_doTicks();

  constexpr float_t const& __cordl_internal_get_fadeDuration() const;

  constexpr float_t& __cordl_internal_get_fadeDuration();

  constexpr float_t const& __cordl_internal_get_fadeTimer() const;

  constexpr float_t& __cordl_internal_get_fadeTimer();

  constexpr ::StringW const& __cordl_internal_get_finalTickSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_finalTickSoundKey();

  constexpr float_t const& __cordl_internal_get_initialFadeAmount() const;

  constexpr float_t& __cordl_internal_get_initialFadeAmount();

  constexpr bool const& __cordl_internal_get_isFading() const;

  constexpr bool& __cordl_internal_get_isFading();

  constexpr bool const& __cordl_internal_get_isRegistered() const;

  constexpr bool& __cordl_internal_get_isRegistered();

  constexpr int32_t const& __cordl_internal_get_lastTickSecond() const;

  constexpr int32_t& __cordl_internal_get_lastTickSecond();

  constexpr ::GlobalNamespace::__RoomAutoCycleEffect__OnFadeComplete*& __cordl_internal_get_onFadeComplete();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomAutoCycleEffect__OnFadeComplete*> const& __cordl_internal_get_onFadeComplete() const;

  constexpr float_t const& __cordl_internal_get_targetFadeAmount() const;

  constexpr float_t& __cordl_internal_get_targetFadeAmount();

  constexpr ::StringW const& __cordl_internal_get_tickSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_tickSoundKey();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_volumeCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_volumeCurve() const;

  constexpr void __cordl_internal_set_curFadeAmount(float_t value);

  constexpr void __cordl_internal_set_defaultAmbientLightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_defaultDirectionalLightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_doTicks(bool value);

  constexpr void __cordl_internal_set_fadeDuration(float_t value);

  constexpr void __cordl_internal_set_fadeTimer(float_t value);

  constexpr void __cordl_internal_set_finalTickSoundKey(::StringW value);

  constexpr void __cordl_internal_set_initialFadeAmount(float_t value);

  constexpr void __cordl_internal_set_isFading(bool value);

  constexpr void __cordl_internal_set_isRegistered(bool value);

  constexpr void __cordl_internal_set_lastTickSecond(int32_t value);

  constexpr void __cordl_internal_set_onFadeComplete(::GlobalNamespace::__RoomAutoCycleEffect__OnFadeComplete* value);

  constexpr void __cordl_internal_set_targetFadeAmount(float_t value);

  constexpr void __cordl_internal_set_tickSoundKey(::StringW value);

  constexpr void __cordl_internal_set_volumeCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method .ctor, addr 0x1631fa0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomAutoCycleEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomAutoCycleEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomAutoCycleEffect(RoomAutoCycleEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomAutoCycleEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomAutoCycleEffect(RoomAutoCycleEffect const&) = delete;

  /// @brief Field tickSoundKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___tickSoundKey;

  /// @brief Field finalTickSoundKey, offset: 0x20, size: 0x8, def value: None
  ::StringW ___finalTickSoundKey;

  /// @brief Field volumeCurve, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___volumeCurve;

  /// @brief Field curFadeAmount, offset: 0x30, size: 0x4, def value: None
  float_t ___curFadeAmount;

  /// @brief Field isRegistered, offset: 0x34, size: 0x1, def value: None
  bool ___isRegistered;

  /// @brief Field defaultAmbientLightColor, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ___defaultAmbientLightColor;

  /// @brief Field defaultDirectionalLightColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ___defaultDirectionalLightColor;

  /// @brief Field isFading, offset: 0x58, size: 0x1, def value: None
  bool ___isFading;

  /// @brief Field initialFadeAmount, offset: 0x5c, size: 0x4, def value: None
  float_t ___initialFadeAmount;

  /// @brief Field targetFadeAmount, offset: 0x60, size: 0x4, def value: None
  float_t ___targetFadeAmount;

  /// @brief Field fadeDuration, offset: 0x64, size: 0x4, def value: None
  float_t ___fadeDuration;

  /// @brief Field fadeTimer, offset: 0x68, size: 0x4, def value: None
  float_t ___fadeTimer;

  /// @brief Field doTicks, offset: 0x6c, size: 0x1, def value: None
  bool ___doTicks;

  /// @brief Field lastTickSecond, offset: 0x70, size: 0x4, def value: None
  int32_t ___lastTickSecond;

  /// @brief Field onFadeComplete, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::__RoomAutoCycleEffect__OnFadeComplete* ___onFadeComplete;

  /// @brief Field transitionInDuration offset 0xffffffff size 0x4
  static constexpr float_t transitionInDuration{ 10.0 };

  /// @brief Field transitionOutDuration offset 0xffffffff size 0x4
  static constexpr float_t transitionOutDuration{ 3.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomAutoCycleEffect, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAutoCycleEffect, ___tickSoundKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAutoCycleEffect, ___finalTickSoundKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAutoCycleEffect, ___volumeCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAutoCycleEffect, ___curFadeAmount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAutoCycleEffect, ___isRegistered) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAutoCycleEffect, ___defaultAmbientLightColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAutoCycleEffect, ___defaultDirectionalLightColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAutoCycleEffect, ___isFading) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAutoCycleEffect, ___initialFadeAmount) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAutoCycleEffect, ___targetFadeAmount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAutoCycleEffect, ___fadeDuration) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAutoCycleEffect, ___fadeTimer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAutoCycleEffect, ___doTicks) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAutoCycleEffect, ___lastTickSecond) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomAutoCycleEffect, ___onFadeComplete) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RoomAutoCycleEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomAutoCycleEffect*, "", "RoomAutoCycleEffect");
NEED_NO_BOX(::GlobalNamespace::__RoomAutoCycleEffect__OnFadeComplete);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomAutoCycleEffect__OnFadeComplete*, "", "RoomAutoCycleEffect/OnFadeComplete");
