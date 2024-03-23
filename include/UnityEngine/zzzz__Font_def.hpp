#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Font)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class __Font__FontTextureRebuildCallback;
}
// Forward declare root types
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class __Font__FontTextureRebuildCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Font);
MARK_REF_PTR_T(::UnityEngine::__Font__FontTextureRebuildCallback);
// Type: ::FontTextureRebuildCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::Font::FontTextureRebuildCallback*
class CORDL_TYPE __Font__FontTextureRebuildCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x15cf238, size 0x3ef38, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::__Font__FontTextureRebuildCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x15cf17c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Font__FontTextureRebuildCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Font__FontTextureRebuildCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Font__FontTextureRebuildCallback(__Font__FontTextureRebuildCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Font__FontTextureRebuildCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Font__FontTextureRebuildCallback(__Font__FontTextureRebuildCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Font__FontTextureRebuildCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::Font
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Font*
class CORDL_TYPE Font : public ::UnityEngine::Object {
public:
  // Declarations
  using FontTextureRebuildCallback = ::UnityEngine::__Font__FontTextureRebuildCallback;

  __declspec(property(get = get_dynamic)) bool dynamic;

  __declspec(property(get = get_fontSize)) int32_t fontSize;

  /// @brief Field m_FontTextureRebuildCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontTextureRebuildCallback,
                      put = __cordl_internal_set_m_FontTextureRebuildCallback))::UnityEngine::__Font__FontTextureRebuildCallback* m_FontTextureRebuildCallback;

  __declspec(property(get = get_material))::UnityW<::UnityEngine::Material> material;

  /// @brief Field textureRebuilt, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_textureRebuilt, put = setStaticF_textureRebuilt))::System::Action_1<::UnityW<::UnityEngine::Font>>* textureRebuilt;

  /// @brief Method HasCharacter, addr 0x15cf0f4, size 0x44, virtual false, abstract: false, final false
  inline bool HasCharacter(char16_t c);

  /// @brief Method HasCharacter, addr 0x15cf138, size 0x44, virtual false, abstract: false, final false
  inline bool HasCharacter(int32_t c);

  /// @brief Method Internal_CreateFont, addr 0x15cf024, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_CreateFont(::UnityEngine::Font* self, ::StringW name);

  /// @brief Method InvokeTextureRebuilt_Internal, addr 0x15cf068, size 0x8c, virtual false, abstract: false, final false
  static inline void InvokeTextureRebuilt_Internal(::UnityEngine::Font* font);

  static inline ::UnityEngine::Font* New_ctor();

  constexpr ::UnityEngine::__Font__FontTextureRebuildCallback*& __cordl_internal_get_m_FontTextureRebuildCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::__Font__FontTextureRebuildCallback*> const& __cordl_internal_get_m_FontTextureRebuildCallback() const;

  constexpr void __cordl_internal_set_m_FontTextureRebuildCallback(::UnityEngine::__Font__FontTextureRebuildCallback* value);

  /// @brief Method .ctor, addr 0x15cefa0, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_textureRebuilt, addr 0x15ced90, size 0xcc, virtual false, abstract: false, final false
  static inline void add_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>* value);

  static inline ::System::Action_1<::UnityW<::UnityEngine::Font>>* getStaticF_textureRebuilt();

  /// @brief Method get_dynamic, addr 0x15cdfb4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_dynamic();

  /// @brief Method get_fontSize, addr 0x15cef64, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_fontSize();

  /// @brief Method get_material, addr 0x15cef28, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Method remove_textureRebuilt, addr 0x15cee5c, size 0xcc, virtual false, abstract: false, final false
  static inline void remove_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>* value);

  static inline void setStaticF_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Font();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Font", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Font(Font&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Font", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Font(Font const&) = delete;

  /// @brief Field m_FontTextureRebuildCallback, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::__Font__FontTextureRebuildCallback* ___m_FontTextureRebuildCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Font, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Font, ___m_FontTextureRebuildCallback) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Font);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Font*, "UnityEngine", "Font");
NEED_NO_BOX(::UnityEngine::__Font__FontTextureRebuildCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Font__FontTextureRebuildCallback*, "UnityEngine", "Font/FontTextureRebuildCallback");
