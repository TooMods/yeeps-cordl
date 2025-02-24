#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableBinding)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine::Playables {
class __PlayableBinding__CreateOutputMethod;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Playables {
class __PlayableBinding__CreateOutputMethod;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod);
MARK_VAL_T(::UnityEngine::Playables::PlayableBinding);
// Type: ::CreateOutputMethod
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: ::PlayableBinding::CreateOutputMethod*
class CORDL_TYPE __PlayableBinding__CreateOutputMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x29e1bb4, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableOutput Invoke(::UnityEngine::Playables::PlayableGraph graph, ::StringW name);

  static inline ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29e1af0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayableBinding__CreateOutputMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayableBinding__CreateOutputMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayableBinding__CreateOutputMethod(__PlayableBinding__CreateOutputMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayableBinding__CreateOutputMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayableBinding__CreateOutputMethod(__PlayableBinding__CreateOutputMethod const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Playables
// Type: UnityEngine.Playables::PlayableBinding
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: ::UnityEngine.Playables::PlayableBinding
struct CORDL_TYPE PlayableBinding {
public:
  // Declarations
  using CreateOutputMethod = ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod;

  /// @brief Field DefaultDuration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultDuration, put = setStaticF_DefaultDuration)) double_t DefaultDuration;

  /// @brief Field None, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_None, put = setStaticF_None))::ArrayW<::UnityEngine::Playables::PlayableBinding, ::Array<::UnityEngine::Playables::PlayableBinding>*> None;

  static inline double_t getStaticF_DefaultDuration();

  static inline ::ArrayW<::UnityEngine::Playables::PlayableBinding, ::Array<::UnityEngine::Playables::PlayableBinding>*> getStaticF_None();

  static inline void setStaticF_DefaultDuration(double_t value);

  static inline void setStaticF_None(::ArrayW<::UnityEngine::Playables::PlayableBinding, ::Array<::UnityEngine::Playables::PlayableBinding>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableBinding();

  // Ctor Parameters [CppParam { name: "m_StreamName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_SourceObject", ty: "::UnityW<::UnityEngine::Object>", modifiers: "",
  // def_value: None }, CppParam { name: "m_SourceBindingType", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "m_CreateOutputMethod", ty:
  // "::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*", modifiers: "", def_value: None }]
  constexpr PlayableBinding(::StringW m_StreamName, ::UnityW<::UnityEngine::Object> m_SourceObject, ::System::Type* m_SourceBindingType,
                            ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod* m_CreateOutputMethod) noexcept;

  /// @brief Field m_StreamName, offset: 0x0, size: 0x8, def value: None
  ::StringW m_StreamName;

  /// @brief Field m_SourceObject, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> m_SourceObject;

  /// @brief Field m_SourceBindingType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* m_SourceBindingType;

  /// @brief Field m_CreateOutputMethod, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod* m_CreateOutputMethod;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableBinding, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableBinding, m_StreamName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableBinding, m_SourceObject) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableBinding, m_SourceBindingType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableBinding, m_CreateOutputMethod) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::__PlayableBinding__CreateOutputMethod*, "UnityEngine.Playables", "PlayableBinding/CreateOutputMethod");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableBinding, "UnityEngine.Playables", "PlayableBinding");
