#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TransitionPortal)
namespace GlobalNamespace {
class MasterPlayer;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TransitionPortal;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TransitionPortal);
// Type: ::TransitionPortal
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TransitionPortal*
class CORDL_TYPE TransitionPortal : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field ambientSound, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ambientSound, put = setStaticF_ambientSound))::UnityW<::UnityEngine::AudioSource> ambientSound;

  /// @brief Field ambientSoundKey, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_ambientSoundKey, put = __cordl_internal_set_ambientSoundKey))::StringW ambientSoundKey;

  /// @brief Field closeDistance, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_closeDistance, put = __cordl_internal_set_closeDistance)) float_t closeDistance;

  /// @brief Field curOpennessRatio, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_curOpennessRatio, put = __cordl_internal_set_curOpennessRatio)) float_t curOpennessRatio;

  /// @brief Field isReversed, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_isReversed, put = __cordl_internal_set_isReversed)) bool isReversed;

  /// @brief Field masterPlayer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_masterPlayer, put = __cordl_internal_set_masterPlayer))::UnityW<::GlobalNamespace::MasterPlayer> masterPlayer;

  /// @brief Field maxOpenness, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_maxOpenness, put = __cordl_internal_set_maxOpenness)) float_t maxOpenness;

  /// @brief Field openDistance, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_openDistance, put = __cordl_internal_set_openDistance)) float_t openDistance;

  /// @brief Field portalDepth, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_portalDepth, put = __cordl_internal_set_portalDepth)) float_t portalDepth;

  /// @brief Field portalMat, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_portalMat, put = __cordl_internal_set_portalMat))::UnityW<::UnityEngine::Material> portalMat;

  /// @brief Field portalTransform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_portalTransform, put = __cordl_internal_set_portalTransform))::UnityW<::UnityEngine::Transform> portalTransform;

  /// @brief Field queuedSoundDestroyID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_queuedSoundDestroyID, put = setStaticF_queuedSoundDestroyID)) int32_t queuedSoundDestroyID;

  /// @brief Method Initialize, addr 0x29c72d0, size 0xcc, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method Invert, addr 0x29c739c, size 0xa0, virtual false, abstract: false, final false
  inline void Invert();

  static inline ::GlobalNamespace::TransitionPortal* New_ctor();

  /// @brief Method OnDisable, addr 0x29c79c4, size 0xf0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x29c754c, size 0x188, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnSourceDestroyed, addr 0x29c7ab4, size 0x48, virtual false, abstract: false, final false
  inline void OnSourceDestroyed();

  /// @brief Method SetOpenessRatio, addr 0x29c743c, size 0x110, virtual false, abstract: false, final false
  inline void SetOpenessRatio(float_t opennessRatio);

  /// @brief Method Start, addr 0x29c78e4, size 0xe0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x29c76d4, size 0x210, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::StringW const& __cordl_internal_get_ambientSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_ambientSoundKey();

  constexpr float_t const& __cordl_internal_get_closeDistance() const;

  constexpr float_t& __cordl_internal_get_closeDistance();

  constexpr float_t const& __cordl_internal_get_curOpennessRatio() const;

  constexpr float_t& __cordl_internal_get_curOpennessRatio();

  constexpr bool const& __cordl_internal_get_isReversed() const;

  constexpr bool& __cordl_internal_get_isReversed();

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& __cordl_internal_get_masterPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& __cordl_internal_get_masterPlayer();

  constexpr float_t const& __cordl_internal_get_maxOpenness() const;

  constexpr float_t& __cordl_internal_get_maxOpenness();

  constexpr float_t const& __cordl_internal_get_openDistance() const;

  constexpr float_t& __cordl_internal_get_openDistance();

  constexpr float_t const& __cordl_internal_get_portalDepth() const;

  constexpr float_t& __cordl_internal_get_portalDepth();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_portalMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_portalMat();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_portalTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_portalTransform();

  constexpr void __cordl_internal_set_ambientSoundKey(::StringW value);

  constexpr void __cordl_internal_set_closeDistance(float_t value);

  constexpr void __cordl_internal_set_curOpennessRatio(float_t value);

  constexpr void __cordl_internal_set_isReversed(bool value);

  constexpr void __cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::MasterPlayer> value);

  constexpr void __cordl_internal_set_maxOpenness(float_t value);

  constexpr void __cordl_internal_set_openDistance(float_t value);

  constexpr void __cordl_internal_set_portalDepth(float_t value);

  constexpr void __cordl_internal_set_portalMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_portalTransform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x29c7afc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::AudioSource> getStaticF_ambientSound();

  static inline int32_t getStaticF_queuedSoundDestroyID();

  static inline void setStaticF_ambientSound(::UnityW<::UnityEngine::AudioSource> value);

  static inline void setStaticF_queuedSoundDestroyID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionPortal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransitionPortal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransitionPortal(TransitionPortal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransitionPortal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransitionPortal(TransitionPortal const&) = delete;

  /// @brief Field portalTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___portalTransform;

  /// @brief Field maxOpenness, offset: 0x20, size: 0x4, def value: None
  float_t ___maxOpenness;

  /// @brief Field openDistance, offset: 0x24, size: 0x4, def value: None
  float_t ___openDistance;

  /// @brief Field closeDistance, offset: 0x28, size: 0x4, def value: None
  float_t ___closeDistance;

  /// @brief Field portalMat, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___portalMat;

  /// @brief Field curOpennessRatio, offset: 0x38, size: 0x4, def value: None
  float_t ___curOpennessRatio;

  /// @brief Field portalDepth, offset: 0x3c, size: 0x4, def value: None
  float_t ___portalDepth;

  /// @brief Field isReversed, offset: 0x40, size: 0x1, def value: None
  bool ___isReversed;

  /// @brief Field masterPlayer, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MasterPlayer> ___masterPlayer;

  /// @brief Field ambientSoundKey, offset: 0x50, size: 0x8, def value: None
  ::StringW ___ambientSoundKey;

  /// @brief Field AMBIENT_SOUND_MAX_PITCH offset 0xffffffff size 0x4
  static constexpr float_t AMBIENT_SOUND_MAX_PITCH{ 1.05 };

  /// @brief Field DESTROY_SOUND_DELAY offset 0xffffffff size 0x4
  static constexpr float_t DESTROY_SOUND_DELAY{ 0.5 };

  /// @brief Field opennessPramName offset 0xffffffff size 0x8
  static constexpr ::ConstString opennessPramName{ u"_Openness" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TransitionPortal, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TransitionPortal, ___portalTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransitionPortal, ___maxOpenness) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransitionPortal, ___openDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransitionPortal, ___closeDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransitionPortal, ___portalMat) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransitionPortal, ___curOpennessRatio) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransitionPortal, ___portalDepth) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransitionPortal, ___isReversed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransitionPortal, ___masterPlayer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransitionPortal, ___ambientSoundKey) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TransitionPortal);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TransitionPortal*, "", "TransitionPortal");
