#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TargetDummyMapObject)
namespace GlobalNamespace {
class Avatar;
}
namespace GlobalNamespace {
class __TargetDummyMapObject__OnTargetHit;
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
class Animator;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TargetDummyMapObject;
}
namespace GlobalNamespace {
class __TargetDummyMapObject__OnTargetHit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TargetDummyMapObject);
MARK_REF_PTR_T(::GlobalNamespace::__TargetDummyMapObject__OnTargetHit);
// Type: ::OnTargetHit
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TargetDummyMapObject::OnTargetHit*
class CORDL_TYPE __TargetDummyMapObject__OnTargetHit : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3084418, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3084438, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3084404, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__TargetDummyMapObject__OnTargetHit* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x3084348, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TargetDummyMapObject__OnTargetHit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TargetDummyMapObject__OnTargetHit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TargetDummyMapObject__OnTargetHit(__TargetDummyMapObject__OnTargetHit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TargetDummyMapObject__OnTargetHit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TargetDummyMapObject__OnTargetHit(__TargetDummyMapObject__OnTargetHit const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TargetDummyMapObject__OnTargetHit, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TargetDummyMapObject
// SizeInfo { instance_size: 256, native_size: -1, calculated_instance_size: 256, calculated_native_size: 256, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TargetDummyMapObject*
class CORDL_TYPE TargetDummyMapObject : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  using OnTargetHit = ::GlobalNamespace::__TargetDummyMapObject__OnTargetHit;

  /// @brief Field animator, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_animator, put = __cordl_internal_set_animator))::UnityW<::UnityEngine::Animator> animator;

  /// @brief Field avatar, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_avatar, put = __cordl_internal_set_avatar))::UnityW<::GlobalNamespace::Avatar> avatar;

  /// @brief Field hitSoundEffectKey, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_hitSoundEffectKey, put = __cordl_internal_set_hitSoundEffectKey))::StringW hitSoundEffectKey;

  /// @brief Field isKilled, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get_isKilled, put = __cordl_internal_set_isKilled)) bool isKilled;

  /// @brief Field killedExpireTime, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_killedExpireTime, put = __cordl_internal_set_killedExpireTime)) float_t killedExpireTime;

  /// @brief Field onTargetHitCallbacks, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_onTargetHitCallbacks, put = __cordl_internal_set_onTargetHitCallbacks))::GlobalNamespace::__TargetDummyMapObject__OnTargetHit* onTargetHitCallbacks;

  static inline ::GlobalNamespace::TargetDummyMapObject* New_ctor();

  /// @brief Method OnHit, addr 0x3083eb4, size 0x50, virtual true, abstract: false, final false
  inline bool OnHit();

  /// @brief Method OnHit, addr 0x3083f04, size 0x50, virtual true, abstract: false, final false
  inline bool OnHit(::UnityEngine::Vector3 dropVelocity);

  /// @brief Method OnHitAndCollect, addr 0x3083f54, size 0x50, virtual true, abstract: false, final false
  inline bool OnHitAndCollect();

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x3083fa4, size 0x244, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(bool sentByMasterPlayer, ::StringW payload);

  /// @brief Method SetIsKilled, addr 0x30841e8, size 0x120, virtual false, abstract: false, final false
  inline void SetIsKilled(bool newIsKilled);

  /// @brief Method Update, addr 0x3084308, size 0x3c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator();

  constexpr ::UnityW<::GlobalNamespace::Avatar> const& __cordl_internal_get_avatar() const;

  constexpr ::UnityW<::GlobalNamespace::Avatar>& __cordl_internal_get_avatar();

  constexpr ::StringW const& __cordl_internal_get_hitSoundEffectKey() const;

  constexpr ::StringW& __cordl_internal_get_hitSoundEffectKey();

  constexpr bool const& __cordl_internal_get_isKilled() const;

  constexpr bool& __cordl_internal_get_isKilled();

  constexpr float_t const& __cordl_internal_get_killedExpireTime() const;

  constexpr float_t& __cordl_internal_get_killedExpireTime();

  constexpr ::GlobalNamespace::__TargetDummyMapObject__OnTargetHit*& __cordl_internal_get_onTargetHitCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TargetDummyMapObject__OnTargetHit*> const& __cordl_internal_get_onTargetHitCallbacks() const;

  constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set_avatar(::UnityW<::GlobalNamespace::Avatar> value);

  constexpr void __cordl_internal_set_hitSoundEffectKey(::StringW value);

  constexpr void __cordl_internal_set_isKilled(bool value);

  constexpr void __cordl_internal_set_killedExpireTime(float_t value);

  constexpr void __cordl_internal_set_onTargetHitCallbacks(::GlobalNamespace::__TargetDummyMapObject__OnTargetHit* value);

  /// @brief Method .ctor, addr 0x3084344, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TargetDummyMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TargetDummyMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TargetDummyMapObject(TargetDummyMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TargetDummyMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TargetDummyMapObject(TargetDummyMapObject const&) = delete;

  /// @brief Field avatar, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Avatar> ___avatar;

  /// @brief Field animator, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ___animator;

  /// @brief Field hitSoundEffectKey, offset: 0xe8, size: 0x8, def value: None
  ::StringW ___hitSoundEffectKey;

  /// @brief Field isKilled, offset: 0xf0, size: 0x1, def value: None
  bool ___isKilled;

  /// @brief Field killedExpireTime, offset: 0xf4, size: 0x4, def value: None
  float_t ___killedExpireTime;

  /// @brief Field onTargetHitCallbacks, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::__TargetDummyMapObject__OnTargetHit* ___onTargetHitCallbacks;

  /// @brief Field hitAnimatorTriggerName offset 0xffffffff size 0x8
  static constexpr ::ConstString hitAnimatorTriggerName{ u"Hit" };

  /// @brief Field killDuration offset 0xffffffff size 0x4
  static constexpr float_t killDuration{ 3.0 };

  /// @brief Field onHitMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString onHitMessage{ u"hit" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TargetDummyMapObject, 0x100>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TargetDummyMapObject, ___avatar) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TargetDummyMapObject, ___animator) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TargetDummyMapObject, ___hitSoundEffectKey) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TargetDummyMapObject, ___isKilled) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TargetDummyMapObject, ___killedExpireTime) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TargetDummyMapObject, ___onTargetHitCallbacks) == 0xf8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TargetDummyMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TargetDummyMapObject*, "", "TargetDummyMapObject");
NEED_NO_BOX(::GlobalNamespace::__TargetDummyMapObject__OnTargetHit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TargetDummyMapObject__OnTargetHit*, "", "TargetDummyMapObject/OnTargetHit");
