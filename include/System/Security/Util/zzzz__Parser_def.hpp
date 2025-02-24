#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Parser)
namespace System::Security::Util {
class TokenizerStream;
}
namespace System::Security::Util {
class Tokenizer;
}
namespace System::Security {
class SecurityDocument;
}
namespace System::Security {
class SecurityElement;
}
// Forward declare root types
namespace System::Security::Util {
class Parser;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Util::Parser);
// Type: System.Security.Util::Parser
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Util {
// Is value type: false
// CS Name: ::System.Security.Util::Parser*
class CORDL_TYPE Parser : public ::System::Object {
public:
  // Declarations
  /// @brief Field _doc, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__doc, put = __cordl_internal_set__doc))::System::Security::SecurityDocument* _doc;

  /// @brief Field _t, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__t, put = __cordl_internal_set__t))::System::Security::Util::Tokenizer* _t;

  /// @brief Method DetermineFormat, addr 0x1ea6b64, size 0x1b0, virtual false, abstract: false, final false
  inline int32_t DetermineFormat(::System::Security::Util::TokenizerStream* stream);

  /// @brief Method GetRequiredSizes, addr 0x1ea660c, size 0x460, virtual false, abstract: false, final false
  inline void GetRequiredSizes(::System::Security::Util::TokenizerStream* stream, ByRef<int32_t> index);

  /// @brief Method GetTopElement, addr 0x1ea65e4, size 0x28, virtual false, abstract: false, final false
  inline ::System::Security::SecurityElement* GetTopElement();

  static inline ::System::Security::Util::Parser* New_ctor(::StringW input);

  static inline ::System::Security::Util::Parser* New_ctor(::System::Security::Util::Tokenizer* t);

  /// @brief Method ParseContents, addr 0x1ea7778, size 0x308, virtual false, abstract: false, final false
  inline void ParseContents();

  constexpr ::System::Security::SecurityDocument*& __cordl_internal_get__doc();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::SecurityDocument*> const& __cordl_internal_get__doc() const;

  constexpr ::System::Security::Util::Tokenizer*& __cordl_internal_get__t();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::Tokenizer*> const& __cordl_internal_get__t() const;

  constexpr void __cordl_internal_set__doc(::System::Security::SecurityDocument* value);

  constexpr void __cordl_internal_set__t(::System::Security::Util::Tokenizer* value);

  /// @brief Method .ctor, addr 0x1ea7c58, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW input);

  /// @brief Method .ctor, addr 0x1ea7bb4, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Util::Tokenizer* t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Parser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Parser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Parser(Parser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Parser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Parser(Parser const&) = delete;

  /// @brief Field _doc, offset: 0x10, size: 0x8, def value: None
  ::System::Security::SecurityDocument* ____doc;

  /// @brief Field _t, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Util::Tokenizer* ____t;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Util::Parser, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::Util::Parser, ____doc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Parser, ____t) == 0x18, "Offset mismatch!");

} // namespace System::Security::Util
NEED_NO_BOX(::System::Security::Util::Parser);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::Parser*, "System.Security.Util", "Parser");
