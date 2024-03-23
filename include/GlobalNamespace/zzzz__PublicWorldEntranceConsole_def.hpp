#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PublicWorldEntranceConsole)
namespace GlobalNamespace {
class CodeInput;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class PublicWorldEntranceConsole;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PublicWorldEntranceConsole);
// Type: ::PublicWorldEntranceConsole
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PublicWorldEntranceConsole*
class CORDL_TYPE PublicWorldEntranceConsole : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field activeContainers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_activeContainers,
                      put = __cordl_internal_set_activeContainers))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> activeContainers;

  /// @brief Field codeInput, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_codeInput, put = __cordl_internal_set_codeInput))::UnityW<::GlobalNamespace::CodeInput> codeInput;

  /// @brief Field destinationPrefixes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_destinationPrefixes, put = __cordl_internal_set_destinationPrefixes))::ArrayW<::StringW, ::Array<::StringW>*> destinationPrefixes;

  /// @brief Field destinationSwitchParticles, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_destinationSwitchParticles, put = __cordl_internal_set_destinationSwitchParticles))::UnityW<::UnityEngine::ParticleSystem> destinationSwitchParticles;

  /// @brief Field destinationSwitchSoundKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_destinationSwitchSoundKey, put = __cordl_internal_set_destinationSwitchSoundKey))::StringW destinationSwitchSoundKey;

  /// @brief Field destinationTexts, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_destinationTexts,
                      put = __cordl_internal_set_destinationTexts))::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> destinationTexts;

  static inline ::GlobalNamespace::PublicWorldEntranceConsole* New_ctor();

  /// @brief Method OnCompleteCodeUpdated, addr 0xf2158c, size 0x74, virtual false, abstract: false, final false
  inline void OnCompleteCodeUpdated(::StringW newCompleteCode);

  /// @brief Method SelectDestination, addr 0xf213c0, size 0x1cc, virtual false, abstract: false, final false
  inline void SelectDestination(::StringW code, bool fromLoad);

  /// @brief Method SetActive, addr 0xf212d4, size 0xec, virtual false, abstract: false, final false
  inline void SetActive(bool newActive);

  /// @brief Method Start, addr 0xf2120c, size 0xc8, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_activeContainers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_activeContainers();

  constexpr ::UnityW<::GlobalNamespace::CodeInput> const& __cordl_internal_get_codeInput() const;

  constexpr ::UnityW<::GlobalNamespace::CodeInput>& __cordl_internal_get_codeInput();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_destinationPrefixes() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_destinationPrefixes();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_destinationSwitchParticles() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_destinationSwitchParticles();

  constexpr ::StringW const& __cordl_internal_get_destinationSwitchSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_destinationSwitchSoundKey();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> const& __cordl_internal_get_destinationTexts() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*>& __cordl_internal_get_destinationTexts();

  constexpr void __cordl_internal_set_activeContainers(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set_codeInput(::UnityW<::GlobalNamespace::CodeInput> value);

  constexpr void __cordl_internal_set_destinationPrefixes(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_destinationSwitchParticles(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set_destinationSwitchSoundKey(::StringW value);

  constexpr void __cordl_internal_set_destinationTexts(::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> value);

  /// @brief Method .ctor, addr 0xf21600, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PublicWorldEntranceConsole();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PublicWorldEntranceConsole", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PublicWorldEntranceConsole(PublicWorldEntranceConsole&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PublicWorldEntranceConsole", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PublicWorldEntranceConsole(PublicWorldEntranceConsole const&) = delete;

  /// @brief Field destinationTexts, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Text>, ::Array<::UnityW<::UnityEngine::UI::Text>>*> ___destinationTexts;

  /// @brief Field destinationSwitchParticles, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ___destinationSwitchParticles;

  /// @brief Field destinationSwitchSoundKey, offset: 0x28, size: 0x8, def value: None
  ::StringW ___destinationSwitchSoundKey;

  /// @brief Field destinationPrefixes, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___destinationPrefixes;

  /// @brief Field activeContainers, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___activeContainers;

  /// @brief Field codeInput, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CodeInput> ___codeInput;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PublicWorldEntranceConsole, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PublicWorldEntranceConsole, ___destinationTexts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PublicWorldEntranceConsole, ___destinationSwitchParticles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PublicWorldEntranceConsole, ___destinationSwitchSoundKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PublicWorldEntranceConsole, ___destinationPrefixes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PublicWorldEntranceConsole, ___activeContainers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PublicWorldEntranceConsole, ___codeInput) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PublicWorldEntranceConsole);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PublicWorldEntranceConsole*, "", "PublicWorldEntranceConsole");
