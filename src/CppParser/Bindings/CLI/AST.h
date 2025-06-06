// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include "CppSharp.h"
#include <AST.h>

namespace CppSharp
{
    namespace Parser
    {
        namespace AST
        {
            enum class ArchType;
            enum class CommentKind;
            enum class RawCommentKind;
            ref class BlockCommandComment;
            ref class BlockContentComment;
            ref class Comment;
            ref class FullComment;
            ref class HTMLEndTagComment;
            ref class HTMLStartTagComment;
            ref class HTMLTagComment;
            ref class InlineCommandComment;
            ref class InlineContentComment;
            ref class NativeLibrary;
            ref class ParagraphComment;
            ref class ParamCommandComment;
            ref class RawComment;
            ref class TParamCommandComment;
            ref class TextComment;
            ref class VerbatimBlockComment;
            ref class VerbatimBlockLineComment;
            ref class VerbatimLineComment;
        }
    }
}

namespace CppSharp
{
    namespace Parser
    {
        namespace AST
        {
            public enum class RawCommentKind
            {
                Invalid = 0,
                OrdinaryBCPL = 1,
                OrdinaryC = 2,
                BCPLSlash = 3,
                BCPLExcl = 4,
                JavaDoc = 5,
                Qt = 6,
                Merged = 7
            };

            public enum class CommentKind
            {
                FullComment = 0,
                BlockContentComment = 1,
                BlockCommandComment = 2,
                ParamCommandComment = 3,
                TParamCommandComment = 4,
                VerbatimBlockComment = 5,
                VerbatimLineComment = 6,
                ParagraphComment = 7,
                HTMLTagComment = 8,
                HTMLStartTagComment = 9,
                HTMLEndTagComment = 10,
                TextComment = 11,
                InlineContentComment = 12,
                InlineCommandComment = 13,
                VerbatimBlockLineComment = 14
            };

            public enum class ArchType
            {
                UnknownArch = 0,
                X86 = 1,
                X86_64 = 2,
                Aarch64 = 3,
                Aarch64Be = 4,
                Aarch64_32 = 5
            };

            public ref class NativeLibrary : ICppInstance
            {
            public:

                property class ::CppSharp::CppParser::AST::NativeLibrary* NativePtr;
                property ::System::IntPtr __Instance
                {
                    virtual ::System::IntPtr get();
                    virtual void set(::System::IntPtr instance);
                }

                NativeLibrary(class ::CppSharp::CppParser::AST::NativeLibrary* native);
                NativeLibrary(class ::CppSharp::CppParser::AST::NativeLibrary* native, bool ownNativeInstance);
                static NativeLibrary^ __CreateInstance(::System::IntPtr native);
                static NativeLibrary^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                NativeLibrary();

                NativeLibrary(CppSharp::Parser::AST::NativeLibrary^ _0);

                ~NativeLibrary();

                property ::System::String^ FileName
                {
                    ::System::String^ get();
                    void set(::System::String^);
                }

                property CppSharp::Parser::AST::ArchType ArchType
                {
                    CppSharp::Parser::AST::ArchType get();
                    void set(CppSharp::Parser::AST::ArchType);
                }

                property ::System::Collections::Generic::List<::System::String^>^ Symbols
                {
                    ::System::Collections::Generic::List<::System::String^>^ get();
                    void set(::System::Collections::Generic::List<::System::String^>^);
                }

                property ::System::Collections::Generic::List<::System::String^>^ Dependencies
                {
                    ::System::Collections::Generic::List<::System::String^>^ get();
                    void set(::System::Collections::Generic::List<::System::String^>^);
                }

                property unsigned int SymbolsCount
                {
                    unsigned int get();
                }

                property unsigned int DependenciesCount
                {
                    unsigned int get();
                }

                ::System::String^ GetSymbols(unsigned int i);

                void AddSymbols(::System::String^ s);

                void ClearSymbols();

                ::System::String^ GetDependencies(unsigned int i);

                void AddDependencies(::System::String^ s);

                void ClearDependencies();

            protected:

                bool __ownsNativeInstance;
            };

            public ref class Comment : ICppInstance
            {
            public:

                property class ::CppSharp::CppParser::AST::Comment* NativePtr;
                property ::System::IntPtr __Instance
                {
                    virtual ::System::IntPtr get();
                    virtual void set(::System::IntPtr instance);
                }

                Comment(class ::CppSharp::CppParser::AST::Comment* native);
                Comment(class ::CppSharp::CppParser::AST::Comment* native, bool ownNativeInstance);
                static Comment^ __CreateInstance(::System::IntPtr native);
                static Comment^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                Comment(CppSharp::Parser::AST::CommentKind kind);

                Comment(CppSharp::Parser::AST::Comment^ _0);

                ~Comment();

                property CppSharp::Parser::AST::CommentKind Kind
                {
                    CppSharp::Parser::AST::CommentKind get();
                    void set(CppSharp::Parser::AST::CommentKind);
                }

                static operator CppSharp::Parser::AST::Comment^(CppSharp::Parser::AST::CommentKind kind);

            protected:

                bool __ownsNativeInstance;
            };

            public ref class BlockContentComment : CppSharp::Parser::AST::Comment
            {
            public:

                BlockContentComment(class ::CppSharp::CppParser::AST::BlockContentComment* native);
                BlockContentComment(class ::CppSharp::CppParser::AST::BlockContentComment* native, bool ownNativeInstance);
                static BlockContentComment^ __CreateInstance(::System::IntPtr native);
                static BlockContentComment^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                BlockContentComment();

                BlockContentComment(CppSharp::Parser::AST::CommentKind Kind);

                BlockContentComment(CppSharp::Parser::AST::BlockContentComment^ _0);

                ~BlockContentComment();

                static operator CppSharp::Parser::AST::BlockContentComment^(CppSharp::Parser::AST::CommentKind Kind);
            };

            public ref class FullComment : CppSharp::Parser::AST::Comment
            {
            public:

                FullComment(class ::CppSharp::CppParser::AST::FullComment* native);
                FullComment(class ::CppSharp::CppParser::AST::FullComment* native, bool ownNativeInstance);
                static FullComment^ __CreateInstance(::System::IntPtr native);
                static FullComment^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                FullComment();

                FullComment(CppSharp::Parser::AST::FullComment^ _0);

                ~FullComment();

                property ::System::Collections::Generic::List<CppSharp::Parser::AST::BlockContentComment^>^ Blocks
                {
                    ::System::Collections::Generic::List<CppSharp::Parser::AST::BlockContentComment^>^ get();
                    void set(::System::Collections::Generic::List<CppSharp::Parser::AST::BlockContentComment^>^);
                }

                property unsigned int BlocksCount
                {
                    unsigned int get();
                }

                CppSharp::Parser::AST::BlockContentComment^ GetBlocks(unsigned int i);

                void AddBlocks(CppSharp::Parser::AST::BlockContentComment^ s);

                void ClearBlocks();
            };

            public ref class InlineContentComment : CppSharp::Parser::AST::Comment
            {
            public:

                InlineContentComment(class ::CppSharp::CppParser::AST::InlineContentComment* native);
                InlineContentComment(class ::CppSharp::CppParser::AST::InlineContentComment* native, bool ownNativeInstance);
                static InlineContentComment^ __CreateInstance(::System::IntPtr native);
                static InlineContentComment^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                InlineContentComment();

                InlineContentComment(CppSharp::Parser::AST::CommentKind Kind);

                InlineContentComment(CppSharp::Parser::AST::InlineContentComment^ _0);

                ~InlineContentComment();

                property bool HasTrailingNewline
                {
                    bool get();
                    void set(bool);
                }

                static operator CppSharp::Parser::AST::InlineContentComment^(CppSharp::Parser::AST::CommentKind Kind);
            };

            public ref class ParagraphComment : CppSharp::Parser::AST::BlockContentComment
            {
            public:

                ParagraphComment(class ::CppSharp::CppParser::AST::ParagraphComment* native);
                ParagraphComment(class ::CppSharp::CppParser::AST::ParagraphComment* native, bool ownNativeInstance);
                static ParagraphComment^ __CreateInstance(::System::IntPtr native);
                static ParagraphComment^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                ParagraphComment();

                ParagraphComment(CppSharp::Parser::AST::ParagraphComment^ _0);

                ~ParagraphComment();

                property bool IsWhitespace
                {
                    bool get();
                    void set(bool);
                }

                property ::System::Collections::Generic::List<CppSharp::Parser::AST::InlineContentComment^>^ Content
                {
                    ::System::Collections::Generic::List<CppSharp::Parser::AST::InlineContentComment^>^ get();
                    void set(::System::Collections::Generic::List<CppSharp::Parser::AST::InlineContentComment^>^);
                }

                property unsigned int ContentCount
                {
                    unsigned int get();
                }

                CppSharp::Parser::AST::InlineContentComment^ GetContent(unsigned int i);

                void AddContent(CppSharp::Parser::AST::InlineContentComment^ s);

                void ClearContent();
            };

            public ref class BlockCommandComment : CppSharp::Parser::AST::BlockContentComment
            {
            public:

                ref class Argument : ICppInstance
                {
                public:

                    property class ::CppSharp::CppParser::AST::BlockCommandComment::Argument* NativePtr;
                    property ::System::IntPtr __Instance
                    {
                        virtual ::System::IntPtr get();
                        virtual void set(::System::IntPtr instance);
                    }

                    Argument(class ::CppSharp::CppParser::AST::BlockCommandComment::Argument* native);
                    Argument(class ::CppSharp::CppParser::AST::BlockCommandComment::Argument* native, bool ownNativeInstance);
                    static Argument^ __CreateInstance(::System::IntPtr native);
                    static Argument^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                    Argument();

                    Argument(CppSharp::Parser::AST::BlockCommandComment::Argument^ _0);

                    ~Argument();

                    property ::System::String^ Text
                    {
                        ::System::String^ get();
                        void set(::System::String^);
                    }

                protected:

                    bool __ownsNativeInstance;
                };

                BlockCommandComment(class ::CppSharp::CppParser::AST::BlockCommandComment* native);
                BlockCommandComment(class ::CppSharp::CppParser::AST::BlockCommandComment* native, bool ownNativeInstance);
                static BlockCommandComment^ __CreateInstance(::System::IntPtr native);
                static BlockCommandComment^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                BlockCommandComment();

                BlockCommandComment(CppSharp::Parser::AST::CommentKind Kind);

                BlockCommandComment(CppSharp::Parser::AST::BlockCommandComment^ _0);

                ~BlockCommandComment();

                property unsigned int CommandId
                {
                    unsigned int get();
                    void set(unsigned int);
                }

                property CppSharp::Parser::AST::ParagraphComment^ ParagraphComment
                {
                    CppSharp::Parser::AST::ParagraphComment^ get();
                    void set(CppSharp::Parser::AST::ParagraphComment^);
                }

                property ::System::Collections::Generic::List<CppSharp::Parser::AST::BlockCommandComment::Argument^>^ Arguments
                {
                    ::System::Collections::Generic::List<CppSharp::Parser::AST::BlockCommandComment::Argument^>^ get();
                    void set(::System::Collections::Generic::List<CppSharp::Parser::AST::BlockCommandComment::Argument^>^);
                }

                property unsigned int ArgumentsCount
                {
                    unsigned int get();
                }

                CppSharp::Parser::AST::BlockCommandComment::Argument^ GetArguments(unsigned int i);

                void AddArguments(CppSharp::Parser::AST::BlockCommandComment::Argument^ s);

                void ClearArguments();

                static operator CppSharp::Parser::AST::BlockCommandComment^(CppSharp::Parser::AST::CommentKind Kind);
            };

            public ref class ParamCommandComment : CppSharp::Parser::AST::BlockCommandComment
            {
            public:

                enum class PassDirection
                {
                    In = 0,
                    Out = 1,
                    InOut = 2
                };

                ParamCommandComment(class ::CppSharp::CppParser::AST::ParamCommandComment* native);
                ParamCommandComment(class ::CppSharp::CppParser::AST::ParamCommandComment* native, bool ownNativeInstance);
                static ParamCommandComment^ __CreateInstance(::System::IntPtr native);
                static ParamCommandComment^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                ParamCommandComment();

                ParamCommandComment(CppSharp::Parser::AST::ParamCommandComment^ _0);

                ~ParamCommandComment();

                property CppSharp::Parser::AST::ParamCommandComment::PassDirection Direction
                {
                    CppSharp::Parser::AST::ParamCommandComment::PassDirection get();
                    void set(CppSharp::Parser::AST::ParamCommandComment::PassDirection);
                }

                property unsigned int ParamIndex
                {
                    unsigned int get();
                    void set(unsigned int);
                }
            };

            public ref class TParamCommandComment : CppSharp::Parser::AST::BlockCommandComment
            {
            public:

                TParamCommandComment(class ::CppSharp::CppParser::AST::TParamCommandComment* native);
                TParamCommandComment(class ::CppSharp::CppParser::AST::TParamCommandComment* native, bool ownNativeInstance);
                static TParamCommandComment^ __CreateInstance(::System::IntPtr native);
                static TParamCommandComment^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                TParamCommandComment();

                TParamCommandComment(CppSharp::Parser::AST::TParamCommandComment^ _0);

                ~TParamCommandComment();

                property ::System::Collections::Generic::List<unsigned int>^ Position
                {
                    ::System::Collections::Generic::List<unsigned int>^ get();
                    void set(::System::Collections::Generic::List<unsigned int>^);
                }

                property unsigned int PositionCount
                {
                    unsigned int get();
                }

                unsigned int GetPosition(unsigned int i);

                void AddPosition([::System::Runtime::InteropServices::In, ::System::Runtime::InteropServices::Out] unsigned int% s);

                void ClearPosition();
            };

            public ref class VerbatimBlockLineComment : CppSharp::Parser::AST::Comment
            {
            public:

                VerbatimBlockLineComment(class ::CppSharp::CppParser::AST::VerbatimBlockLineComment* native);
                VerbatimBlockLineComment(class ::CppSharp::CppParser::AST::VerbatimBlockLineComment* native, bool ownNativeInstance);
                static VerbatimBlockLineComment^ __CreateInstance(::System::IntPtr native);
                static VerbatimBlockLineComment^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                VerbatimBlockLineComment();

                VerbatimBlockLineComment(CppSharp::Parser::AST::VerbatimBlockLineComment^ _0);

                ~VerbatimBlockLineComment();

                property ::System::String^ Text
                {
                    ::System::String^ get();
                    void set(::System::String^);
                }
            };

            public ref class VerbatimBlockComment : CppSharp::Parser::AST::BlockCommandComment
            {
            public:

                VerbatimBlockComment(class ::CppSharp::CppParser::AST::VerbatimBlockComment* native);
                VerbatimBlockComment(class ::CppSharp::CppParser::AST::VerbatimBlockComment* native, bool ownNativeInstance);
                static VerbatimBlockComment^ __CreateInstance(::System::IntPtr native);
                static VerbatimBlockComment^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                VerbatimBlockComment();

                VerbatimBlockComment(CppSharp::Parser::AST::VerbatimBlockComment^ _0);

                ~VerbatimBlockComment();

                property ::System::Collections::Generic::List<CppSharp::Parser::AST::VerbatimBlockLineComment^>^ Lines
                {
                    ::System::Collections::Generic::List<CppSharp::Parser::AST::VerbatimBlockLineComment^>^ get();
                    void set(::System::Collections::Generic::List<CppSharp::Parser::AST::VerbatimBlockLineComment^>^);
                }

                property unsigned int LinesCount
                {
                    unsigned int get();
                }

                CppSharp::Parser::AST::VerbatimBlockLineComment^ GetLines(unsigned int i);

                void AddLines(CppSharp::Parser::AST::VerbatimBlockLineComment^ s);

                void ClearLines();
            };

            public ref class VerbatimLineComment : CppSharp::Parser::AST::BlockCommandComment
            {
            public:

                VerbatimLineComment(class ::CppSharp::CppParser::AST::VerbatimLineComment* native);
                VerbatimLineComment(class ::CppSharp::CppParser::AST::VerbatimLineComment* native, bool ownNativeInstance);
                static VerbatimLineComment^ __CreateInstance(::System::IntPtr native);
                static VerbatimLineComment^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                VerbatimLineComment();

                VerbatimLineComment(CppSharp::Parser::AST::VerbatimLineComment^ _0);

                ~VerbatimLineComment();

                property ::System::String^ Text
                {
                    ::System::String^ get();
                    void set(::System::String^);
                }
            };

            public ref class InlineCommandComment : CppSharp::Parser::AST::InlineContentComment
            {
            public:

                enum class RenderKind
                {
                    RenderNormal = 0,
                    RenderBold = 1,
                    RenderMonospaced = 2,
                    RenderEmphasized = 3,
                    RenderAnchor = 4
                };

                ref class Argument : ICppInstance
                {
                public:

                    property class ::CppSharp::CppParser::AST::InlineCommandComment::Argument* NativePtr;
                    property ::System::IntPtr __Instance
                    {
                        virtual ::System::IntPtr get();
                        virtual void set(::System::IntPtr instance);
                    }

                    Argument(class ::CppSharp::CppParser::AST::InlineCommandComment::Argument* native);
                    Argument(class ::CppSharp::CppParser::AST::InlineCommandComment::Argument* native, bool ownNativeInstance);
                    static Argument^ __CreateInstance(::System::IntPtr native);
                    static Argument^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                    Argument();

                    Argument(CppSharp::Parser::AST::InlineCommandComment::Argument^ _0);

                    ~Argument();

                    property ::System::String^ Text
                    {
                        ::System::String^ get();
                        void set(::System::String^);
                    }

                protected:

                    bool __ownsNativeInstance;
                };

                InlineCommandComment(class ::CppSharp::CppParser::AST::InlineCommandComment* native);
                InlineCommandComment(class ::CppSharp::CppParser::AST::InlineCommandComment* native, bool ownNativeInstance);
                static InlineCommandComment^ __CreateInstance(::System::IntPtr native);
                static InlineCommandComment^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                InlineCommandComment();

                InlineCommandComment(CppSharp::Parser::AST::InlineCommandComment^ _0);

                ~InlineCommandComment();

                property unsigned int CommandId
                {
                    unsigned int get();
                    void set(unsigned int);
                }

                property CppSharp::Parser::AST::InlineCommandComment::RenderKind CommentRenderKind
                {
                    CppSharp::Parser::AST::InlineCommandComment::RenderKind get();
                    void set(CppSharp::Parser::AST::InlineCommandComment::RenderKind);
                }

                property ::System::Collections::Generic::List<CppSharp::Parser::AST::InlineCommandComment::Argument^>^ Arguments
                {
                    ::System::Collections::Generic::List<CppSharp::Parser::AST::InlineCommandComment::Argument^>^ get();
                    void set(::System::Collections::Generic::List<CppSharp::Parser::AST::InlineCommandComment::Argument^>^);
                }

                property unsigned int ArgumentsCount
                {
                    unsigned int get();
                }

                CppSharp::Parser::AST::InlineCommandComment::Argument^ GetArguments(unsigned int i);

                void AddArguments(CppSharp::Parser::AST::InlineCommandComment::Argument^ s);

                void ClearArguments();
            };

            public ref class HTMLTagComment : CppSharp::Parser::AST::InlineContentComment
            {
            public:

                HTMLTagComment(class ::CppSharp::CppParser::AST::HTMLTagComment* native);
                HTMLTagComment(class ::CppSharp::CppParser::AST::HTMLTagComment* native, bool ownNativeInstance);
                static HTMLTagComment^ __CreateInstance(::System::IntPtr native);
                static HTMLTagComment^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                HTMLTagComment();

                HTMLTagComment(CppSharp::Parser::AST::CommentKind Kind);

                HTMLTagComment(CppSharp::Parser::AST::HTMLTagComment^ _0);

                ~HTMLTagComment();

                static operator CppSharp::Parser::AST::HTMLTagComment^(CppSharp::Parser::AST::CommentKind Kind);
            };

            public ref class HTMLStartTagComment : CppSharp::Parser::AST::HTMLTagComment
            {
            public:

                ref class Attribute : ICppInstance
                {
                public:

                    property class ::CppSharp::CppParser::AST::HTMLStartTagComment::Attribute* NativePtr;
                    property ::System::IntPtr __Instance
                    {
                        virtual ::System::IntPtr get();
                        virtual void set(::System::IntPtr instance);
                    }

                    Attribute(class ::CppSharp::CppParser::AST::HTMLStartTagComment::Attribute* native);
                    Attribute(class ::CppSharp::CppParser::AST::HTMLStartTagComment::Attribute* native, bool ownNativeInstance);
                    static Attribute^ __CreateInstance(::System::IntPtr native);
                    static Attribute^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                    Attribute();

                    Attribute(CppSharp::Parser::AST::HTMLStartTagComment::Attribute^ _0);

                    ~Attribute();

                    property ::System::String^ Name
                    {
                        ::System::String^ get();
                        void set(::System::String^);
                    }

                    property ::System::String^ Value
                    {
                        ::System::String^ get();
                        void set(::System::String^);
                    }

                protected:

                    bool __ownsNativeInstance;
                };

                HTMLStartTagComment(class ::CppSharp::CppParser::AST::HTMLStartTagComment* native);
                HTMLStartTagComment(class ::CppSharp::CppParser::AST::HTMLStartTagComment* native, bool ownNativeInstance);
                static HTMLStartTagComment^ __CreateInstance(::System::IntPtr native);
                static HTMLStartTagComment^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                HTMLStartTagComment();

                HTMLStartTagComment(CppSharp::Parser::AST::HTMLStartTagComment^ _0);

                ~HTMLStartTagComment();

                property ::System::String^ TagName
                {
                    ::System::String^ get();
                    void set(::System::String^);
                }

                property ::System::Collections::Generic::List<CppSharp::Parser::AST::HTMLStartTagComment::Attribute^>^ Attributes
                {
                    ::System::Collections::Generic::List<CppSharp::Parser::AST::HTMLStartTagComment::Attribute^>^ get();
                    void set(::System::Collections::Generic::List<CppSharp::Parser::AST::HTMLStartTagComment::Attribute^>^);
                }

                property unsigned int AttributesCount
                {
                    unsigned int get();
                }

                CppSharp::Parser::AST::HTMLStartTagComment::Attribute^ GetAttributes(unsigned int i);

                void AddAttributes(CppSharp::Parser::AST::HTMLStartTagComment::Attribute^ s);

                void ClearAttributes();
            };

            public ref class HTMLEndTagComment : CppSharp::Parser::AST::HTMLTagComment
            {
            public:

                HTMLEndTagComment(class ::CppSharp::CppParser::AST::HTMLEndTagComment* native);
                HTMLEndTagComment(class ::CppSharp::CppParser::AST::HTMLEndTagComment* native, bool ownNativeInstance);
                static HTMLEndTagComment^ __CreateInstance(::System::IntPtr native);
                static HTMLEndTagComment^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                HTMLEndTagComment();

                HTMLEndTagComment(CppSharp::Parser::AST::HTMLEndTagComment^ _0);

                ~HTMLEndTagComment();

                property ::System::String^ TagName
                {
                    ::System::String^ get();
                    void set(::System::String^);
                }
            };

            public ref class TextComment : CppSharp::Parser::AST::InlineContentComment
            {
            public:

                TextComment(class ::CppSharp::CppParser::AST::TextComment* native);
                TextComment(class ::CppSharp::CppParser::AST::TextComment* native, bool ownNativeInstance);
                static TextComment^ __CreateInstance(::System::IntPtr native);
                static TextComment^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                TextComment();

                TextComment(CppSharp::Parser::AST::TextComment^ _0);

                ~TextComment();

                property ::System::String^ Text
                {
                    ::System::String^ get();
                    void set(::System::String^);
                }
            };

            public ref class RawComment : ICppInstance
            {
            public:

                property class ::CppSharp::CppParser::AST::RawComment* NativePtr;
                property ::System::IntPtr __Instance
                {
                    virtual ::System::IntPtr get();
                    virtual void set(::System::IntPtr instance);
                }

                RawComment(class ::CppSharp::CppParser::AST::RawComment* native);
                RawComment(class ::CppSharp::CppParser::AST::RawComment* native, bool ownNativeInstance);
                static RawComment^ __CreateInstance(::System::IntPtr native);
                static RawComment^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
                RawComment();

                RawComment(CppSharp::Parser::AST::RawComment^ _0);

                ~RawComment();

                property CppSharp::Parser::AST::RawCommentKind Kind
                {
                    CppSharp::Parser::AST::RawCommentKind get();
                    void set(CppSharp::Parser::AST::RawCommentKind);
                }

                property ::System::String^ Text
                {
                    ::System::String^ get();
                    void set(::System::String^);
                }

                property ::System::String^ BriefText
                {
                    ::System::String^ get();
                    void set(::System::String^);
                }

                property CppSharp::Parser::AST::FullComment^ FullCommentBlock
                {
                    CppSharp::Parser::AST::FullComment^ get();
                    void set(CppSharp::Parser::AST::FullComment^);
                }

            protected:

                bool __ownsNativeInstance;
            };
        }
    }
}
